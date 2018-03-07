#pragma once

#include "CoreMinimal.h"
#include "ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(BlankPlugin, All, All);

class FBlankPluginModule : public IModuleInterface
{
public:

	//---------------------------------+
	// IModuleInterface implementation |
	//---------------------------------+
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
