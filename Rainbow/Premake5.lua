workspace "ColoredRectangle"
    architecture "x86_64"
    configurations { "App" }

project "ColoredRectangle"
    kind "ConsoleApp"
    location "App"
    language "C++"

    targetdir ("Bin")
    objdir ("BinObj")

    files {"App/**.cpp", "App/**.hpp" }

    links { "SDL2" }
