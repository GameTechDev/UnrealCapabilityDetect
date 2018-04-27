/////////////////////////////////////////////////////////////////////////////////////////////
// Copyright 2017 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or imlied.
// See the License for the specific language governing permissions and
// limitations under the License.
/////////////////////////////////////////////////////////////////////////////////////////////

#ifdef _WIN32
#include "StatsCollector.h"
#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include <assert.h>
#include <Psapi.h>
#include <D3D11.h>
#include <dxdiag.h>
#include <Setupapi.h>
#include <regex>
#include <intrin.h>

// PDH counter tokens - indexes token string vector
enum PDH_TOKENS
{
	PDHT_PROCESSOR_INFORMATION,
	PDHT_PROCESSOR_FREQUENCY,
	PDHT_MEMORY,
	PDHT_PERCENT_MAX_FREQ,

	PDHT_COUNT
};

static const wchar_t *vinit[PDHT_COUNT] = { L"Processor Information", L"Processor Frequency", L"Memory", L"% of Maximum Frequency" };

std::vector<std::wstring> sPDHTokens(vinit, std::end(vinit));

size_t cache_l3_size() {
	size_t size = 0;
	DWORD buffer_size = 0;
	DWORD i = 0;
	SYSTEM_LOGICAL_PROCESSOR_INFORMATION * buffer = 0;

	GetLogicalProcessorInformation(0, &buffer_size);
	buffer = (SYSTEM_LOGICAL_PROCESSOR_INFORMATION *)malloc(buffer_size);
	GetLogicalProcessorInformation(&buffer[0], &buffer_size);
	for (i = 0; i != buffer_size / sizeof(SYSTEM_LOGICAL_PROCESSOR_INFORMATION); ++i) {
		if (buffer[i].Relationship == RelationCache && buffer[i].Cache.Level == 3) {
			size = buffer[i].Cache.Size;
			break;
		}
	}

	free(buffer);
	return size;
}

void InfoCollector::SetCPUBrandString()
{
	int CPUInfo[4] = { -1 };
	unsigned   nExIds, i = 0;
	char CPUBrandString[0x40];
	__cpuid(CPUInfo, 0x80000000);
	nExIds = CPUInfo[0];
	for (i = 0x80000000; i <= nExIds; ++i)
	{
		__cpuid(CPUInfo, i);
		if (i == 0x80000002)
			memcpy(CPUBrandString, CPUInfo, sizeof(CPUInfo));
		else if (i == 0x80000003)
			memcpy(CPUBrandString + 16, CPUInfo, sizeof(CPUInfo));
		else if (i == 0x80000004)
			memcpy(CPUBrandString + 32, CPUInfo, sizeof(CPUInfo));
	}

	mFullProcessorName = std::string(CPUBrandString);

	try {
		std::regex re(".*Intel\\(R\\)[[:space:]]Core\\(TM\\)[[:space:]](\\S+)[[:space:]]CPU.*");
		std::smatch match;
		if (std::regex_search(mFullProcessorName, match, re) && match.size() > 1) {
			mProcessorName = match.str(1);
		}
		else {
			mProcessorName = std::string("");
		}
	}
	catch (std::regex_error& e) {
		std::cerr << e.what() << std::endl;
	}
}

std::string InfoCollector::GetProcessorName()
{
	return mProcessorName;
}

std::string InfoCollector::GetFullProcessorNameString()
{
	return mFullProcessorName;
}

void cpuID(unsigned i, unsigned regs[4]) {
	__cpuid((int *)regs, (int)i);
}

void InfoCollector::SetIsIntelCPU()
{
	char vendor[12];
	unsigned regs[4];
	cpuID(0, regs);
	((unsigned *)vendor)[0] = regs[1];
	((unsigned *)vendor)[1] = regs[3];
	((unsigned *)vendor)[2] = regs[2];
	std::string cpuVendor = std::string(vendor, 12);
	static const std::string test("GenuineIntel");
	if (cpuVendor.compare(test) != 0)
	{
		mIsIntelCPU = false;
	}
	else
	{
		mIsIntelCPU = true;
	}
}

void InfoCollector::InitializeData()
{
	mQueryHandle = NULL;

	SetIsIntelCPU();
	SetCPUBrandString();

	// Get cache size
	size_t cacheSize = cache_l3_size();
	mCacheSize = static_cast<double>(cacheSize) / 1024 / 1024;

	// Get total  physical memory
	MEMORYSTATUSEX statex;
	statex.dwLength = sizeof(statex);
	GlobalMemoryStatusEx(&statex);
	mUsablePhysicalMemoryGB = (float)statex.ullTotalPhys / (1024 * 1024 * 1024);

	ConstructMetricDataStructure();
	GetCoreCounts();

	mMetricsVec[AVAILABLE_MEMORY]->mPDHPath = std::wstring(L"\\" + sPDHTokens[PDHT_MEMORY] + L"\\Available MBytes");
	mMetricsVec[RSS_MEMORY_SIZE]->mPDHPath = std::wstring(L"\\" + sPDHTokens[PDHT_MEMORY] + L"\\Committed Bytes");
	mMetricsVec[CPU_FREQ]->mPDHPath = std::wstring(L"\\" + sPDHTokens[PDHT_PROCESSOR_INFORMATION] + L"(0," + std::to_wstring(0) + L")\\" + sPDHTokens[PDHT_PROCESSOR_FREQUENCY]);
	mMetricsVec[CPU_PERCENT_MAX_FREQ_PER_CORE]->mPDHPath = std::wstring(L"\\" + sPDHTokens[PDHT_PROCESSOR_INFORMATION] + L"(0," + std::to_wstring(0) + L")\\" + sPDHTokens[PDHT_PERCENT_MAX_FREQ]);

	PDH_STATUS Status = PdhOpenQuery(NULL, NULL, &mQueryHandle);

	if (Status != ERROR_SUCCESS) {
		std::cout << "nPdhOpenQuery failed with status " << Status << std::endl;
		if (mQueryHandle) {
			PdhCloseQuery(mQueryHandle);
		}
	}

	for (auto& it : mMetricsVec) {
		PDH_STATUS status = PdhAddCounter(mQueryHandle, (WCHAR*)(it)->mPDHPath.c_str(), 0, &((it)->mPDHCounter));

		if (status != ERROR_SUCCESS)
		{
			std::cout << "nPdhAddCounter " << (it)->mMetricName << " failed with status " << Status << std::endl;
		}
	}

	PDH_STATUS status = PdhCollectQueryData(mQueryHandle);

	if (status != ERROR_SUCCESS) {
		std::cout << "nPdhOpenQuery failed with status " << Status << std::endl;
		PdhCloseQuery(mQueryHandle);
	}

	CollectPDHData();
}

InfoCollector::InfoCollector()
	: mCPUCoresNumber(0)
	, mCPUPhysicalCoresNumber(0)
{
	InitializeData();
}

InfoCollector::~InfoCollector() {}

bool InfoCollector::IsIntelCPU()
{
	return mIsIntelCPU;
}

double InfoCollector::GetCacheSize()
{
	return mCacheSize;
}


float InfoCollector::GetUsablePhysMemoryGB()
{
	return mUsablePhysicalMemoryGB;
}

void InfoCollector::CollectPDHData() {
	PDH_FMT_COUNTERVALUE DisplayValue;
	PDH_STATUS status = PdhCollectQueryData(mQueryHandle);

	if (status != ERROR_SUCCESS) {
		std::cerr << "PdhCollectQueryData failed with " << status << std::endl;

		PdhCloseQuery(mQueryHandle);
	}
	else
	{
		for (auto& it : mMetricsVec) {
			status = PdhGetFormattedCounterValue((it)->mPDHCounter, PDH_FMT_DOUBLE, &((it)->mCounterType), &DisplayValue);
			if (status != ERROR_SUCCESS) {
				std::cerr << "PdhGetFormattedCounterValue failed with status " << status << " on " << (it)->mMetricName << std::endl;
			}
			else {
				if ((it)->mMetricName.compare(mMetricsVec[RSS_MEMORY_SIZE]->mMetricName) == 0)
					(it)->SetCurrentValue(DisplayValue.doubleValue / (1024 * 1024));
				else
					(it)->SetCurrentValue(DisplayValue.doubleValue);
			}
		}
	}
}

typedef BOOL(WINAPI *GetLogicalProcessorInformation_TYPE)(
	PSYSTEM_LOGICAL_PROCESSOR_INFORMATION,
	PDWORD);

void InfoCollector::GetCoreCounts()
{
	SYSTEM_INFO systemInfo;
	::GetSystemInfo(&systemInfo);
	mCPUCoresNumber = systemInfo.dwNumberOfProcessors;
	PSYSTEM_LOGICAL_PROCESSOR_INFORMATION info = NULL;
	DWORD length = 0;
	GetLogicalProcessorInformation_TYPE pGetProcessorInfo = (GetLogicalProcessorInformation_TYPE)GetProcAddress(GetModuleHandle(L"kernel32"), "GetLogicalProcessorInformation");

	if (pGetProcessorInfo)
	{
		BOOL res = pGetProcessorInfo(info, &length);
		if (!res)
		{
			info = (PSYSTEM_LOGICAL_PROCESSOR_INFORMATION)malloc(length);
			if (info)
			{
				pGetProcessorInfo(info, &length);
				DWORD count = length / sizeof(SYSTEM_LOGICAL_PROCESSOR_INFORMATION);
				for (DWORD i = 0; i < count; ++i)
				{
					switch (info[i].Relationship)
					{
					case RelationProcessorCore:
						++mCPUPhysicalCoresNumber;
						break;
					}
				}
				free((void*)info);
			}
		}
	}
	else
	{
		mCPUPhysicalCoresNumber = mCPUCoresNumber;
	}
	assert(0 != mCPUCoresNumber);
}
#endif