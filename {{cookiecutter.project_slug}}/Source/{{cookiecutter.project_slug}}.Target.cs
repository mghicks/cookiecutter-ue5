using UnrealBuildTool;

public class {{cookiecutter.project_slug}}Target : TargetRules
{
	public {{cookiecutter.project_slug}}Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "{{cookiecutter.project_slug}}Core" } );
	}
}
