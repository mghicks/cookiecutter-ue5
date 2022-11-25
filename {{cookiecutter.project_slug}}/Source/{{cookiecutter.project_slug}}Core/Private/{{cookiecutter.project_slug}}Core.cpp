#include "{{cookiecutter.project_slug}}Core.h"
#include "Modules/ModuleManager.h"

#include "Log.h"

void F{{cookiecutter.project_slug}}Core::StartupModule()
{
	UE_LOG(Log{{cookiecutter.project_slug}}Core, Log, TEXT("{{cookiecutter.project_slug}}Core module starting up"));
}

void F{{cookiecutter.project_slug}}Core::ShutdownModule()
{
	UE_LOG(Log{{cookiecutter.project_slug}}Core, Log, TEXT("{{cookiecutter.project_slug}}Core module shutting down"));
}

IMPLEMENT_PRIMARY_GAME_MODULE(F{{cookiecutter.project_slug}}Core, {{cookiecutter.project_slug}}Core, "{{cookiecutter.project_slug}}Core");
