// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class XID2 : ModuleRules
{
	public XID2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
				{
					"Core",
					"XID2Library",
					"Projects"
				}
			);


		PrivateDependencyModuleNames.AddRange(
			new string[]
				{
					"CoreUObject",
					"Engine",
				}
			);
	}
}
