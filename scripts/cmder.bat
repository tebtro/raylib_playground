@echo off


call "%~dp0\shell.bat"

cmd /k "%ConEmuDir%\..\init.bat" -new_console:d:%project_folder_path%  -new_console:t:raylib_playground

