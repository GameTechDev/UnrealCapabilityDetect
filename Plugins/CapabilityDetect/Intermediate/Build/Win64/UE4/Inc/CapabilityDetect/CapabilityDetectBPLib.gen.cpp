// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/CapabilityDetectBPLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapabilityDetectBPLib() {}
// Cross Module References
	CAPABILITYDETECT_API UClass* Z_Construct_UClass_UCapabilityDetectBPLib_NoRegister();
	CAPABILITYDETECT_API UClass* Z_Construct_UClass_UCapabilityDetectBPLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CapabilityDetect();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeCPUPerfIndex();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeGPUPerfIndex();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_ComputePerfIndex();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_FreeResources();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetAvailableMemoryMB();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetCacheSizeMB();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetComittedMemoryMB();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetCoreFrequency();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetCorePercMaxFrequency();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetFullProcessorName();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetMaxBaseFrequency();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumLogicalCores();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumPhysicalCores();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetProcessorName();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetUsablePhysMemoryGB();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_InitializeResources();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA();
	CAPABILITYDETECT_API UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_RHIVendorName();
// End Cross Module References
	void UCapabilityDetectBPLib::StaticRegisterNativesUCapabilityDetectBPLib()
	{
		UClass* Class = UCapabilityDetectBPLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComputeCPUPerfIndex", &UCapabilityDetectBPLib::execComputeCPUPerfIndex },
			{ "ComputeGPUPerfIndex", &UCapabilityDetectBPLib::execComputeGPUPerfIndex },
			{ "ComputePerfIndex", &UCapabilityDetectBPLib::execComputePerfIndex },
			{ "FreeResources", &UCapabilityDetectBPLib::execFreeResources },
			{ "GetAvailableMemoryMB", &UCapabilityDetectBPLib::execGetAvailableMemoryMB },
			{ "GetCacheSizeMB", &UCapabilityDetectBPLib::execGetCacheSizeMB },
			{ "GetComittedMemoryMB", &UCapabilityDetectBPLib::execGetComittedMemoryMB },
			{ "GetCoreFrequency", &UCapabilityDetectBPLib::execGetCoreFrequency },
			{ "GetCorePercMaxFrequency", &UCapabilityDetectBPLib::execGetCorePercMaxFrequency },
			{ "GetFullProcessorName", &UCapabilityDetectBPLib::execGetFullProcessorName },
			{ "GetMaxBaseFrequency", &UCapabilityDetectBPLib::execGetMaxBaseFrequency },
			{ "GetNumLogicalCores", &UCapabilityDetectBPLib::execGetNumLogicalCores },
			{ "GetNumPhysicalCores", &UCapabilityDetectBPLib::execGetNumPhysicalCores },
			{ "GetProcessorName", &UCapabilityDetectBPLib::execGetProcessorName },
			{ "GetUsablePhysMemoryGB", &UCapabilityDetectBPLib::execGetUsablePhysMemoryGB },
			{ "InitializeResources", &UCapabilityDetectBPLib::execInitializeResources },
			{ "IsIntelCPU", &UCapabilityDetectBPLib::execIsIntelCPU },
			{ "IsRHIAMD", &UCapabilityDetectBPLib::execIsRHIAMD },
			{ "IsRHIIntel", &UCapabilityDetectBPLib::execIsRHIIntel },
			{ "IsRHINVIDIA", &UCapabilityDetectBPLib::execIsRHINVIDIA },
			{ "RHIVendorName", &UCapabilityDetectBPLib::execRHIVendorName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeCPUPerfIndex()
	{
		struct CapabilityDetectBPLib_eventComputeCPUPerfIndex_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapabilityDetectBPLib_eventComputeCPUPerfIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CPU Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "ComputeCPUPerfIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventComputeCPUPerfIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeGPUPerfIndex()
	{
		struct CapabilityDetectBPLib_eventComputeGPUPerfIndex_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapabilityDetectBPLib_eventComputeGPUPerfIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CPU Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "ComputeGPUPerfIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventComputeGPUPerfIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_ComputePerfIndex()
	{
		struct CapabilityDetectBPLib_eventComputePerfIndex_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapabilityDetectBPLib_eventComputePerfIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "CPU Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "ComputePerfIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventComputePerfIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_FreeResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
				{ "ToolTip", "Cleans up resources." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "FreeResources", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetAvailableMemoryMB()
	{
		struct CapabilityDetectBPLib_eventGetAvailableMemoryMB_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetAvailableMemoryMB_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "GetAvailableMemoryMB", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventGetAvailableMemoryMB_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetCacheSizeMB()
	{
		struct CapabilityDetectBPLib_eventGetCacheSizeMB_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetCacheSizeMB_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "GetCacheSizeMB", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventGetCacheSizeMB_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetComittedMemoryMB()
	{
		struct CapabilityDetectBPLib_eventGetComittedMemoryMB_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetComittedMemoryMB_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "GetComittedMemoryMB", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventGetComittedMemoryMB_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetCoreFrequency()
	{
		struct CapabilityDetectBPLib_eventGetCoreFrequency_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetCoreFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
				{ "ToolTip", "These are used in GetMaxFrequency() calculation.\nGetCoreFreq returns the frequency at collection time, while PercMaxFrequency returns the percentage of the maximum frequency." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "GetCoreFrequency", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventGetCoreFrequency_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetCorePercMaxFrequency()
	{
		struct CapabilityDetectBPLib_eventGetCorePercMaxFrequency_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetCorePercMaxFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "GetCorePercMaxFrequency", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventGetCorePercMaxFrequency_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetFullProcessorName()
	{
		struct CapabilityDetectBPLib_eventGetFullProcessorName_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetFullProcessorName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "GetFullProcessorName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventGetFullProcessorName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetMaxBaseFrequency()
	{
		struct CapabilityDetectBPLib_eventGetMaxBaseFrequency_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetMaxBaseFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "GetMaxBaseFrequency", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventGetMaxBaseFrequency_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumLogicalCores()
	{
		struct CapabilityDetectBPLib_eventGetNumLogicalCores_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetNumLogicalCores_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
				{ "ToolTip", "These are the getters used in the bucketing decision\nThey can be used to create your own bucketing solution" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "GetNumLogicalCores", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventGetNumLogicalCores_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumPhysicalCores()
	{
		struct CapabilityDetectBPLib_eventGetNumPhysicalCores_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetNumPhysicalCores_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
				{ "ToolTip", "Not used in the internal calculation, but are exposed to help\ncreate more elaborate bucketing systems" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "GetNumPhysicalCores", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventGetNumPhysicalCores_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetProcessorName()
	{
		struct CapabilityDetectBPLib_eventGetProcessorName_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetProcessorName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "GetProcessorName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventGetProcessorName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_GetUsablePhysMemoryGB()
	{
		struct CapabilityDetectBPLib_eventGetUsablePhysMemoryGB_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapabilityDetectBPLib_eventGetUsablePhysMemoryGB_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "GetUsablePhysMemoryGB", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventGetUsablePhysMemoryGB_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_InitializeResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
				{ "ToolTip", "Initializes Values." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "InitializeResources", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU()
	{
		struct CapabilityDetectBPLib_eventIsIntelCPU_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((CapabilityDetectBPLib_eventIsIntelCPU_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CapabilityDetectBPLib_eventIsIntelCPU_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "IsIntelCPU", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventIsIntelCPU_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD()
	{
		struct CapabilityDetectBPLib_eventIsRHIAMD_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((CapabilityDetectBPLib_eventIsRHIAMD_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CapabilityDetectBPLib_eventIsRHIAMD_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GPU Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "IsRHIAMD", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventIsRHIAMD_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel()
	{
		struct CapabilityDetectBPLib_eventIsRHIIntel_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((CapabilityDetectBPLib_eventIsRHIIntel_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CapabilityDetectBPLib_eventIsRHIIntel_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GPU Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
				{ "ToolTip", "RHI Blueprint Function Wrappers" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "IsRHIIntel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventIsRHIIntel_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA()
	{
		struct CapabilityDetectBPLib_eventIsRHINVIDIA_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((CapabilityDetectBPLib_eventIsRHINVIDIA_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CapabilityDetectBPLib_eventIsRHINVIDIA_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GPU Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "IsRHINVIDIA", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventIsRHINVIDIA_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCapabilityDetectBPLib_RHIVendorName()
	{
		struct CapabilityDetectBPLib_eventRHIVendorName_Parms
		{
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CapabilityDetectBPLib_eventRHIVendorName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "GPU Capability Detect Library" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCapabilityDetectBPLib, "RHIVendorName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(CapabilityDetectBPLib_eventRHIVendorName_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCapabilityDetectBPLib_NoRegister()
	{
		return UCapabilityDetectBPLib::StaticClass();
	}
	UClass* Z_Construct_UClass_UCapabilityDetectBPLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_CapabilityDetect,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeCPUPerfIndex, "ComputeCPUPerfIndex" }, // 548507685
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_ComputeGPUPerfIndex, "ComputeGPUPerfIndex" }, // 568153980
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_ComputePerfIndex, "ComputePerfIndex" }, // 1070251338
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_FreeResources, "FreeResources" }, // 1742664338
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetAvailableMemoryMB, "GetAvailableMemoryMB" }, // 3578437467
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetCacheSizeMB, "GetCacheSizeMB" }, // 4189095598
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetComittedMemoryMB, "GetComittedMemoryMB" }, // 3356467306
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetCoreFrequency, "GetCoreFrequency" }, // 4132605880
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetCorePercMaxFrequency, "GetCorePercMaxFrequency" }, // 1654842679
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetFullProcessorName, "GetFullProcessorName" }, // 3418599572
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetMaxBaseFrequency, "GetMaxBaseFrequency" }, // 339885319
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumLogicalCores, "GetNumLogicalCores" }, // 88677811
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetNumPhysicalCores, "GetNumPhysicalCores" }, // 1329768413
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetProcessorName, "GetProcessorName" }, // 3589020877
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_GetUsablePhysMemoryGB, "GetUsablePhysMemoryGB" }, // 3063609974
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_InitializeResources, "InitializeResources" }, // 2440012316
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_IsIntelCPU, "IsIntelCPU" }, // 1245523255
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIAMD, "IsRHIAMD" }, // 1842218789
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHIIntel, "IsRHIIntel" }, // 3353991197
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_IsRHINVIDIA, "IsRHINVIDIA" }, // 2154481485
				{ &Z_Construct_UFunction_UCapabilityDetectBPLib_RHIVendorName, "RHIVendorName" }, // 2308880230
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "CapabilityDetectBPLib.h" },
				{ "ModuleRelativePath", "Public/CapabilityDetectBPLib.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCapabilityDetectBPLib>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCapabilityDetectBPLib::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCapabilityDetectBPLib, 2542537821);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCapabilityDetectBPLib(Z_Construct_UClass_UCapabilityDetectBPLib, &UCapabilityDetectBPLib::StaticClass, TEXT("/Script/CapabilityDetect"), TEXT("UCapabilityDetectBPLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCapabilityDetectBPLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
