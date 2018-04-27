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
#include "MyActor.h"
#include "PlatformTest.h"
#include "PlatformConfig.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UPlatformConfig* CapabilityLevel = UCapabilityTest::GetCapabilityLevel();

	if (CapabilityLevel->Name == TEXT("LOW"))
	{
		// Use Simple Approximation for LOW end CPU...
		// e.g. Spawn 100 CPU Particles...
	}

	else if (CapabilityLevel->Name == TEXT("MEDIUM"))
	{
		// Use Advanced Approximation for MID range CPU...
		// e.g. Spawn 200 CPU Particles
	}

	else if (CapabilityLevel->Name == TEXT("HIGH"))
	{
		// Use Simple Simulation for HIGH end CPU...
		// e.g. Spawn 300 CPU Particles
	}

	else if (CapabilityLevel->Name == TEXT("ULTRA"))
	{
		// Use Advanced Approximation for ULTRA CPU...
		// e.g. Spawn 400 CPU Particles
	}
}

