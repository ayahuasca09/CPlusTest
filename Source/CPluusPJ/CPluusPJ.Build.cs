// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPluusPJ : ModuleRules
{
	public CPluusPJ(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
