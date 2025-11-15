// Required includes
#include <SDL2/SDL.h>
#include <iostream>

// Window & renderer to display the portrait
SDL_Window * Win;
SDL_Renderer * Rend;

// We'll be using these variables for the portrait
SDL_Surface * Subject;
SDL_Texture * SubjectTex;

// For Running the program & event polling
bool Running;
SDL_Event Evt;
