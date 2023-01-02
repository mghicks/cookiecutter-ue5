#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

class F{{cookiecutter.project_slug}}Core : public IModuleInterface
{
public:
	static inline F{{cookiecutter.project_slug}}Core& Get()
	{
		return FModuleManager::LoadModuleChecked<F{{cookiecutter.project_slug}}Core>("{{cookiecutter.project_slug}}Core");
	}

	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("{{cookiecutter.project_slug}}Core");
	}

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
