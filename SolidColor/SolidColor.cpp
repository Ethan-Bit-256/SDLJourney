// Required includes
#include <iostream>
#include <SDL2/SDL.h>

int main(int argc, char * argv[]){
    // Window & Renderer
    SDL_Window * Window = SDL_CreateWindow("Some Color.", 100, 100, 800, 600, SDL_WINDOW_SHOWN);
    SDL_Renderer * Renderer = SDL_CreateRenderer(Window, -1, 0);

    // Setting the renderer color
    SDL_SetRenderDrawColor(Renderer, 200, 100, 0, 255);
    SDL_RenderClear(Renderer);
    SDL_RenderPresent(Renderer);

    // Required variables to run & control the program
    SDL_Event Evt;
    bool Running = true;

    // Main loop
    while(Running){
        // Event Polling
        while(SDL_PollEvent(&Evt)){
            // Checking to see if the quit button has been pressed
            if(Evt.type == SDL_QUIT){

                // Quitting & cleaning up.
                std::cout << "Quitting.\n";
                SDL_DestroyWindow(Window);
                SDL_Quit();
                Running = false;
            }
        }
    }
    
}
