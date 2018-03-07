#include "BlankPlugin.h"

#define LOCTEXT_NAMESPACE "FBlankPluginModule"

void FBlankPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory;
	// the exact timing is specified in the .uplugin file per-module
}

void FBlankPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  
	// For modules that support dynamic reloading, we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE

/* ------------------------------------ HOT-RELOAD support ------------------------------------ */

// Plugin module mode:
//IMPLEMENT_MODULE(FBlankPluginModule, BlankPlugin);

// HotReload module mode:
IMPLEMENT_PRIMARY_GAME_MODULE(FDefaultGameModuleImpl, BlankPlugin, "BlankPlugin");

/* -------------------------------------------------------------------------------------------- */
