# SDLJourney
My process of learning graphical programming using SDL.

## How to build
I only have linux support for this. Just make sure SDL2 is installed and Run Build.sh in any of the project folders.

### My projects so far in order from oldest to newest
1. BasicWindow
2. SolidColor
3. Portrait1
4. Rainbow

### A specific Error
If you encounter this error:
```
Build.sh: line 1: Premake/GNULinux/premake5: Permission denied
```
you need the go to the GNULinux directory, delete the binary, then put in a new premake5 binary (make sure the binary is named "premake5" specifically).
