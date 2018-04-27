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

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CapabilityDetectBPLib.generated.h"

/**
 * 
 */
UCLASS()
class CAPABILITYDETECT_API UCapabilityDetectBPLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

protected:
	//UPROPERTY()
	//static FSynthBenchmarkResults m_synthBenchResults;
	static struct FSynthBenchmarkResults m_synthBenchResults;
public:
	// Initializes Values.
	UFUNCTION(BlueprintCallable, Category = "Capability Detect Library")
	static void InitializeResources();

	// Cleans up resources.
	UFUNCTION(BlueprintCallable, Category = "Capability Detect Library")
	static void FreeResources();

	UFUNCTION(BlueprintCallable, Category = "Capability Detect Library")
	static bool IsIntelCPU();

	// These are the getters used in the bucketing decision
	// They can be used to create your own bucketing solution
	UFUNCTION(BlueprintCallable, Category = "Capability Detect Library")
	static int GetNumLogicalCores();

	// Not used in the internal calculation, but are exposed to help
	// create more elaborate bucketing systems
	UFUNCTION(BlueprintCallable, Category = "Capability Detect Library")
	static int GetNumPhysicalCores();

	UFUNCTION(BlueprintCallable, Category = "Capability Detect Library")
	static float GetUsablePhysMemoryGB();

	UFUNCTION(BlueprintCallable, Category = "Capability Detect Library")
	static float GetComittedMemoryMB();

	UFUNCTION(BlueprintCallable, Category = "Capability Detect Library")
	static float GetAvailableMemoryMB();

	UFUNCTION(BlueprintCallable, Category = "Capability Detect Library")
	static float GetCacheSizeMB();

	UFUNCTION(BlueprintCallable, Category = "Capability Detect Library")
	static float GetMaxBaseFrequency();

	// These are used in GetMaxFrequency() calculation.
	// GetCoreFreq returns the frequency at collection time, while PercMaxFrequency returns the percentage of the maximum frequency.
	UFUNCTION(BlueprintCallable, Category = "Capability Detect Library")
	static float GetCoreFrequency();

	UFUNCTION(BlueprintCallable, Category = "Capability Detect Library")
	static float GetCorePercMaxFrequency();

	UFUNCTION(BlueprintCallable, Category = "Capability Detect Library")
	static FString GetFullProcessorName();

	UFUNCTION(BlueprintCallable, Category = "Capability Detect Library")
	static FString GetProcessorName();

	// RHI Blueprint Function Wrappers
	UFUNCTION(BlueprintCallable, Category = "GPU Capability Detect Library")
	static bool IsRHIIntel();

	UFUNCTION(BlueprintCallable, Category = "GPU Capability Detect Library")
	static bool IsRHIAMD();

	UFUNCTION(BlueprintCallable, Category = "GPU Capability Detect Library")
	static bool IsRHINVIDIA();

	UFUNCTION(BlueprintCallable, Category = "GPU Capability Detect Library")
	static FName RHIVendorName();

	UFUNCTION(BlueprintCallable, Category = "CPU Capability Detect Library")
	static float ComputeGPUPerfIndex();

	UFUNCTION(BlueprintCallable, Category = "CPU Capability Detect Library")
	static float ComputeCPUPerfIndex();
};
