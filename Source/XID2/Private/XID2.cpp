// Copyright Epic Games, Inc. All Rights Reserved.

#include "XID2.h"
#include "Misc/MessageDialog.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "HAL/PlatformProcess.h"

#define LOCTEXT_NAMESPACE "FXID2Module"

DEFINE_LOG_CATEGORY(LogXID2);


void FXID2Module::StartupModule() {
	FString BaseDir = IPluginManager::Get().FindPlugin("XID2")->GetBaseDir();

	FString LibsPath, XID2Path, ftd2xxPath;
#if PLATFORM_WINDOWS
	LibsPath = FPaths::Combine(*BaseDir, TEXT("Source/ThirdParty/XID2Library/Win64"));
	XID2Path = FPaths::Combine(*LibsPath, TEXT("xid_device_driver.dll"));
	ftd2xxPath = FPaths::Combine(*LibsPath, TEXT("ftd2xx.dll"));
#endif // PLATFORM_WINDOWS
	ftd2xxLibraryHandle = !ftd2xxPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*ftd2xxPath) : nullptr;
	XID2LibraryHandle = !XID2Path.IsEmpty() ? FPlatformProcess::GetDllHandle(*XID2Path) : nullptr;
}

void FXID2Module::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	// Free the dll handle
	FPlatformProcess::FreeDllHandle(XID2LibraryHandle);
	XID2LibraryHandle = nullptr;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FXID2Module, XID2)
