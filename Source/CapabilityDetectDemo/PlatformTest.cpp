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

#include "PlatformTest.h"
#include "PlatformConfig.h"
#include "PlatformSurvey.h"
#include "CapabilityDetectBPLib.h"
#include "ConstructorHelpers.h"

bool UCapabilityTest::CapabilityTest(UPlatformConfig* config)
{
	// True if system capabilities exceed platform definitions
	return UCapabilityDetectBPLib::GetNumPhysicalCores() >= config->NumPhysicalCores &&
		   UCapabilityDetectBPLib::GetNumLogicalCores()  >= config->NumLogicalCores  &&
		   UCapabilityDetectBPLib::ComputeCPUPerfIndex() >= config->CPUPerfIndex;
}

UPlatformConfig* UCapabilityTest::GetCapabilityLevel()
{
	// Create Platform Definitions
	UPlatformConfig *ULTRA, *HIGH, *MEDIUM, *LOW;
	ULTRA = NewObject<UPlatformConfig>();
	HIGH = NewObject<UPlatformConfig>();
	MEDIUM = NewObject<UPlatformConfig>();
	LOW = NewObject<UPlatformConfig>();

	// Assign Properties to platform definitions.

	// LOW - 2 Physical Cores 4 Hyper-threads
	LOW->Name = TEXT("LOW");
	LOW->NumPhysicalCores = 2;
	LOW->NumLogicalCores = 4;
	LOW->CPUPerfIndex = 0.0;

	// MEDIUM - 4 Physical Cores 8 Hyper-threads
	MEDIUM->Name = TEXT("MEDIUM");
	MEDIUM->NumPhysicalCores = 4;
	MEDIUM->NumLogicalCores = 8;
	MEDIUM->CPUPerfIndex = 50.0;

	// HIGH - 6 Physical Cores 12 Hyper-threads
	HIGH->Name = TEXT("HIGH");
	HIGH->NumPhysicalCores = 6;
	HIGH->NumLogicalCores = 12;
	HIGH->CPUPerfIndex = 100.0;

	// ULTRA - 8 Physical Cores 16 Hyper-threads
	ULTRA->Name = TEXT("ULTRA");
	ULTRA->NumLogicalCores = 8;
	ULTRA->NumPhysicalCores = 16;
	ULTRA->CPUPerfIndex = 125.0;

	// Test platforms against detected capabilities.
	if (CapabilityTest(ULTRA)) {
		return ULTRA;
	}
	if (CapabilityTest(HIGH)) {
		return HIGH;
	}
	if (CapabilityTest(MEDIUM)) {
		return MEDIUM;
	}
	
	return LOW;
}