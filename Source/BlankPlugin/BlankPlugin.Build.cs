using UnrealBuildTool;

public class BlankPlugin : ModuleRules
{
	public BlankPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(new string[] {
            // ... add public include paths required here ...
        });

		PrivateIncludePaths.AddRange(new string[] {
            "BlankPlugin/Private",
        });
			
		
		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
		});
			
		
		PrivateDependencyModuleNames.AddRange(new string[] {
			"CoreUObject",
			"Engine",
			"Slate",
			"SlateCore",
		});
		
		
		DynamicallyLoadedModuleNames.AddRange(new string[] {
			// ... add any dynamically loaded modules here ...
		});
	}
}
