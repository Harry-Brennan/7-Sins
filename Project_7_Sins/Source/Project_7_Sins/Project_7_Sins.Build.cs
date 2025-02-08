// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_7_Sins : ModuleRules
{
	public Project_7_Sins(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
