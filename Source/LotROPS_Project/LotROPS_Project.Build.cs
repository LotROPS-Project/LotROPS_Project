// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LotROPS_Project : ModuleRules
{
	public LotROPS_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
