// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BaiXiaoSheng : ModuleRules
{
	public BaiXiaoSheng(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				//"Runtime/TextAsset/Private",
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				//"ProceduralMeshComponent",
				"InputCore",
				"UMG",
				//"Paper2D",
			
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"UnrealEd",
				"SlateCore",
				"HTTP",
				"ImageWrapper",
				"RenderCore",
				"AIModule",
				"NavigationSystem",
				"ApplicationCore",
				"RHI",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

		PublicDefinitions.Add("WITH_OGGVORBIS=1");
	}
}
