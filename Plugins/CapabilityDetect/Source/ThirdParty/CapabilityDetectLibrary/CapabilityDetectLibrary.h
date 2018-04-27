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

#if defined _WIN32 || defined _WIN64
	#define DLLIMPORT __declspec(dllimport)
#else
	#define DLLIMPORT
#endif

// This needs to be done first to query and fill values
DLLIMPORT void Intel_InitializeResources(void);

// This is used to determine if running on an Intel CPU
DLLIMPORT bool Intel_IsIntelCPU(void);

// Cleans up resources.
DLLIMPORT void Intel_FreeResources(void);

// These are the getters used in the bucketing decision
// They can be used to create your own bucketing solution
DLLIMPORT int Intel_GetNumLogicalCores(void);
DLLIMPORT double Intel_GetUsablePhysMemoryGB();
DLLIMPORT double Intel_GetMaxBaseFrequency();
DLLIMPORT double Intel_GetCacheSizeMB(void);

// Not used in the internal calculation, but are exposed to help
// create more elaborate bucketing systems
DLLIMPORT int Intel_GetNumPhysicalCores(void);
DLLIMPORT double Intel_GetComittedMemoryMB(void);
DLLIMPORT double Intel_GetAvailableMemoryMB(void);

// These are used in GetMaxFrequency() calculation.
// GetCoreFreq returns the frequency at collection time, while PercMaxFrequency returns the percentage of the maximum frequency.
DLLIMPORT double Intel_GetCoreFrequency();
DLLIMPORT double Intel_GetCorePercMaxFrequency();
DLLIMPORT void Intel_GetSKU(char **cpuSKU, int* bufferSize);
DLLIMPORT void Intel_GetFullProcessorName(char* buffer, int* bufferSize);
DLLIMPORT void Intel_GetProcessorName(char* buffer, int* bufferSize);