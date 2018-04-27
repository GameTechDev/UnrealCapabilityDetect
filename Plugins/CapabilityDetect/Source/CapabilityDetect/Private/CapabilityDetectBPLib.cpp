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

#include "CapabilityDetectBPLib.h"
#include "CapabilityDetectLibrary.h"
#include "Runtime/RHI/Public/RHI.h"
#include "PlatformSurvey.h"
#include "SynthBenchmark.h"

void UCapabilityDetectBPLib::InitializeResources()
{
	Intel_InitializeResources();
}

void UCapabilityDetectBPLib::FreeResources()
{
	Intel_FreeResources();
}

bool UCapabilityDetectBPLib::IsIntelCPU()
{
	return Intel_IsIntelCPU();
}

float UCapabilityDetectBPLib::ComputeGPUPerfIndex()
{
	static bool bRunOnce = false;
	static FSynthBenchmarkResults synthBenchResults;

	if (!bRunOnce) {
		ISynthBenchmark::Get().Run(synthBenchResults);
		bRunOnce = true;
	}

	return synthBenchResults.ComputeGPUPerfIndex();
}

float UCapabilityDetectBPLib::ComputeCPUPerfIndex()
{
	static bool bRunOnce = false;
	static FSynthBenchmarkResults synthBenchResults;

	if (!bRunOnce) {
		ISynthBenchmark::Get().Run(synthBenchResults, false);
		bRunOnce = true;
	}

	return synthBenchResults.ComputeCPUPerfIndex();
}

int UCapabilityDetectBPLib::GetNumLogicalCores()
{
	return Intel_GetNumLogicalCores();
}

float UCapabilityDetectBPLib::GetUsablePhysMemoryGB()
{
	return Intel_GetUsablePhysMemoryGB();
}

float UCapabilityDetectBPLib::GetComittedMemoryMB()
{
	return Intel_GetComittedMemoryMB();
}

float UCapabilityDetectBPLib::GetAvailableMemoryMB()
{
	return Intel_GetAvailableMemoryMB();
}

float UCapabilityDetectBPLib::GetCacheSizeMB()
{
	return Intel_GetCacheSizeMB();
}

float UCapabilityDetectBPLib::GetMaxBaseFrequency()
{
	return Intel_GetMaxBaseFrequency();
}

int UCapabilityDetectBPLib::GetNumPhysicalCores()
{
	return Intel_GetNumPhysicalCores();
}

float UCapabilityDetectBPLib::GetCoreFrequency()
{
	return Intel_GetCoreFrequency();
}

float UCapabilityDetectBPLib::GetCorePercMaxFrequency()
{
	return Intel_GetCorePercMaxFrequency();
}

FString UCapabilityDetectBPLib::GetFullProcessorName()
{
	const int bufferSize = 512;
	char buffer[bufferSize];

	Intel_GetFullProcessorName(buffer, (int*)&bufferSize);

	return FString(ANSI_TO_TCHAR(buffer));
}

FString UCapabilityDetectBPLib::GetProcessorName()
{
	const int bufferSize = 512;
	char buffer[bufferSize];

	Intel_GetProcessorName(buffer, (int*)&bufferSize);

	return FString(ANSI_TO_TCHAR(buffer));
}

bool UCapabilityDetectBPLib::IsRHIIntel()
{
	return IsRHIDeviceIntel();
}

bool UCapabilityDetectBPLib::IsRHIAMD()
{
	return IsRHIDeviceAMD();
}

bool UCapabilityDetectBPLib::IsRHINVIDIA()
{
	return IsRHIDeviceNVIDIA();
}

FName UCapabilityDetectBPLib::RHIVendorName()
{
	return FName(RHIVendorIdToString());
}