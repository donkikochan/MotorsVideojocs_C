// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UVic_ProjecteC : ModuleRules
{
	public UVic_ProjecteC(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
