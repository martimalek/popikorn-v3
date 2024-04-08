// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class pruebas2 : ModuleRules
{
	public pruebas2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
