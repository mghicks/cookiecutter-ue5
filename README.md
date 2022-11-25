# Cookiecutter-ue5

[Cookiecutter](https://github.com/cookiecutter/cookiecutter) template for a C++ UE5 project based on [lafith](https://github.com/lafith)'s [UE5Template](https://github.com/lafith/UE5Template) and [Alex Forsythe](https://www.youtube.com/c/AlexForsythe/videos)'s [tutorial](https://www.youtube.com/watch?v=94FvzO1HVzY) video.

## Quickstart

Install the latest Cookiecutter if you haven't installed it yet:

```
pip install -U cookiecutter
```

Generate a C++ UE5 project::

```
cookiecutter gh:mghicks/cookiecutter-ue5
```

## Building and Running


From the generated project folder, the `ue.bat` script simplifies common tasks.
```
$cd <proj_name>
$./ue.bat build         [Compile the modules]
$./ue.bat editor        [Open the project in the UE5 Editor]
$./ue.bat run           [Run a playable instance of the game ]
$./ue.bat buildexe      [Build the standalone game]
$./ue.bat ship          [Cook and Build the standalone game for shipping]
```

## Unreal Engine Install Location

Cookiecutter supports per-user configuration in a `$HOME/.cookiecutterrc` file.  This can be used to provide the path to your Unreal Engine installation.

```
# $HOME/.cookiecutterrc
default_context:
  ue5_install_dir: "D:/epic/UE_5.1"
```
