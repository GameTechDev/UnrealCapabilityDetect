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
#include "Engine/DataAsset.h"
#include "PlatformConfig.generated.h"

/**
 * Platform Configuration Data Asset
 */
UCLASS(BlueprintType)
class CAPABILITYDETECTDEMO_API UPlatformConfig : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Configuration")
	float CPUPerfIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Configuration")
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Configuration")
	bool IsIntelCPU;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Configuration")
	int NumPhysicalCores;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Configuration")
	int NumLogicalCores;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Configuration")
	float UsablePhysMemoryGB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Configuration")
	float ComittedMemoryMB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Configuration")
	float AvailableMemoryMB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Configuration")
	float CacheSizeMB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Configuration")
	float MaxBaseFrequency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Configuration")
	float CoreFrequency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Configuration")
	float CorePercMaxFrequency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Configuration")
	FString FullProcessorName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Platform Configuration")
	FString ProcessorName;
};
