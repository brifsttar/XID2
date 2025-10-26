// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

public class XID2Library : ModuleRules
{
	public XID2Library(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;
		PublicSystemIncludePaths.Add("$(ModuleDir)/Public");

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			// Add the import library
			string LiDir = Path.Combine(ModuleDirectory, "Win64");
			PublicAdditionalLibraries.Add(Path.Combine(LiDir, "xid_device_driver.lib"));

			// Delay-load the DLL, so we can load it from the right place first
			PublicDelayLoadDLLs.Add("ftd2xx.dll");
			PublicDelayLoadDLLs.Add("xid_device_driver.dll");

			// Ensure that the DLL is staged along with the executable
			RuntimeDependencies.Add(Path.Combine(LiDir, "ftd2xx.dll"));
			RuntimeDependencies.Add(Path.Combine(LiDir, "xid_device_driver.dll"));
		}
	}
}
