using UnrealBuildTool;

public class {{cookiecutter.project_slug}}EditorTarget : TargetRules
{
	public {{cookiecutter.project_slug}}EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "{{cookiecutter.project_slug}}Core" } );
	}
}
