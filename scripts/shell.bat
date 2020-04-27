@echo off


::
:: check if environment variables exist
::

IF "%VS_VCVARSALL_FILE_PATH%"=="" (
    :: path should be something like this:
    :: "D:\Programme\Microsoft Visual Studio Enterprise\VC\Auxiliary\Build\vcvarsall.bat" x64
    ::
    echo.
    echo Could not find environment variable for vcvarsall.bat!!!
    echo.

    set environment_error=true
)

if "%environment_error%"=="true" (
    ::PAUSE
    goto:EOF
)


::
:: folder paths setup
::

set scripts_folder_path=%~dp0

pushd ".."
set project_folder_path=%cd%
popd

set src_folder_path=%project_folder_path%/src
set run_tree_path=%project_folder_path%/run_tree


::
:: vcvarsall
::

:: call "%VS_VCVARSALL_FILE_PATH%" x86
call "%VS_VCVARSALL_FILE_PATH%" x64


::
:: add scripts folder to PATH
::

set PATH=%scripts_folder_path%;%run_tree_path%;%PATH%
