// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CapabilityDetect.h"
#include "Core.h"
#include "ModuleManager.h"
#include "IPluginManager.h"
#include "CapabilityDetectLibrary.h"

#define LOCTEXT_NAMESPACE "FCapabilityDetectModule"

void FCapabilityDetectModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	// Get the base directory of this plugin
	FString BaseDir = IPluginManager::Get().FindPlugin("CapabilityDetect")->GetBaseDir();

	// Add on the relative location of the third party dll and load it
	FString LibraryPath;
#if PLATFORM_WINDOWS
	LibraryPath = FPaths::Combine(*BaseDir, TEXT("Binaries/ThirdParty/CapabilityDetectLibrary/Win64/CapabilityDetectLibrary.dll"));
#endif // PLATFORM_WINDOWS

	CapabilityDetectLibraryHandle = !LibraryPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*LibraryPath) : nullptr;

	if (CapabilityDetectLibraryHandle)
	{
		Intel_InitializeResources();
	}
	else
	{
		FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("CapabilityDetectError", "Failed to load capability detect library"));
	}
}

void FCapabilityDetectModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
	Intel_FreeResources();

	// Free the dll handle
	FPlatformProcess::FreeDllHandle(CapabilityDetectLibraryHandle);
	CapabilityDetectLibraryHandle = nullptr;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCapabilityDetectModule, CapabilityDetect)