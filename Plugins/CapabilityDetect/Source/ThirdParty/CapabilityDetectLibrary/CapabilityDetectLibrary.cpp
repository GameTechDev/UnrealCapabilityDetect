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
#include "StatsCollector.h"
#include <string.h>
#include <stdlib.h>

#if defined _WIN32 || defined _WIN64
#include <Windows.h>

	#define DLLEXPORT __declspec(dllexport)
#else
	#include <stdio.h>
#endif

#ifndef DLLEXPORT
	#define DLLEXPORT
#endif

InfoCollector* collector = nullptr;

DLLEXPORT bool Intel_IsIntelCPU(void)
{
	if (collector != nullptr)
	{
		return collector->IsIntelCPU();
	}
	else
		return 0;
}

DLLEXPORT void Intel_InitializeResources()
{
	collector = new InfoCollector();
}

DLLEXPORT int Intel_GetNumLogicalCores(void)
{
	if (collector != nullptr)
		return collector->GetLogicalCoreCount();
	else
		return 0;
}

DLLEXPORT int Intel_GetNumPhysicalCores(void)
{
	if (collector != nullptr)
		return collector->GetPhysicalCoreCount();
	else
		return 0;
}

DLLEXPORT double Intel_GetComittedMemoryMB(void)
{
	if (collector != nullptr)
	{
		return static_cast<double>(collector->CollectDataForMetric(RSS_MEMORY_SIZE));
	}
	else
		return 0;
}

DLLEXPORT double Intel_GetAvailableMemoryMB(void)
{
	if (collector != nullptr)
	{
		return static_cast<double>(collector->CollectDataForMetric(AVAILABLE_MEMORY));
	}
	else
		return 0;
}

DLLEXPORT double Intel_GetCacheSizeMB(void)
{
	if (collector != nullptr)
	{
		return collector->GetCacheSize();
	}
	else
		return 0;
}

DLLEXPORT double Intel_GetCoreFrequency()
{
	if (collector != nullptr)
	{
		return collector->CollectDataForMetric(CPU_FREQ);
	}
	else
		return 0;
}

DLLEXPORT double Intel_GetCorePercMaxFrequency()
{
	if (collector != nullptr)
	{
		return collector->CollectDataForMetric(CPU_PERCENT_MAX_FREQ_PER_CORE);
	}
	else
		return 0;
}

DLLEXPORT double Intel_GetMaxBaseFrequency()
{
	if (collector != nullptr)
	{
		double coreFreq = Intel_GetCoreFrequency();
		double percentMaxFreq = Intel_GetCorePercMaxFrequency();

		return ((coreFreq * 100) / percentMaxFreq);
	}
	else
		return 0;
}

DLLEXPORT double Intel_GetUsablePhysMemoryGB()
{
	if (collector != nullptr)
	{
		return collector->GetUsablePhysMemoryGB();
	}
	else
		return 0;
}

DLLEXPORT void Intel_FreeResources()
{
	if (collector)
		delete collector;
}

DLLEXPORT void Intel_GetSKU(char **cpuSKU, int* bufferSize)
{
	if (collector != nullptr)
	{
		std::string str = collector->GetFullProcessorNameString();
		if (*bufferSize > (int)str.size())
		{
			*cpuSKU = new char[*bufferSize];
			int r1 = strncpy_s(*cpuSKU, str.size() + 1, str.c_str(), str.size());
		}
	}
}

DLLEXPORT void Intel_GetFullProcessorName(char* cpuSKU, int* bufferSize)
{
	if (collector != nullptr)
	{
		std::string str = collector->GetFullProcessorNameString();
		if (*bufferSize > (int)str.size())
		{
			int r1 = strncpy_s(cpuSKU, str.size() + 1, str.c_str(), str.size());
		}
	}
}

DLLEXPORT void Intel_GetProcessorName(char* cpuSKU, int* bufferSize)
{
	if (collector != nullptr)
	{
		std::string str = collector->GetProcessorName();
		if (*bufferSize > (int)str.size())
		{
			int r1 = strncpy_s(cpuSKU, str.size() + 1, str.c_str(), str.size());
		}
	}
}

