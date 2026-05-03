// Required includes
#include <iostream>
#include "Declarations.hpp"
#include <unistd.h>

// The main method
int main(){
    // True so that the app can run
    Running = true;

    // The window and renderer we'll be needing.
    Window = SDL_CreateWindow("The rainbow.", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 400, 400, SDL_WINDOW_RESIZABLE);
    Renderer = SDL_CreateRenderer(Window, -1, 0);

    // Why not?
    std::cout << "Working\n";

    // The Running loop
    while(Running){

        // Red
        SDL_SetRenderDrawColor(Renderer, 255, 0, 0, 255);
        SDL_RenderClear(Renderer);
        SDL_RenderPresent(Renderer);

        sleep(1);

        // Orange
        SDL_SetRenderDrawColor(Renderer, 255, 127, 0, 255);
        SDL_RenderClear(Renderer);
        SDL_RenderPresent(Renderer);

        sleep(1);

        // Yellow
        SDL_SetRenderDrawColor(Renderer, 255, 255, 0, 255);
        SDL_RenderClear(Renderer);
        SDL_RenderPresent(Renderer);

        sleep(1);

        // Green
        SDL_SetRenderDrawColor(Renderer, 0, 255, 0, 255);
        SDL_RenderClear(Renderer);
        SDL_RenderPresent(Renderer);

        sleep(1);

        // Blue
        SDL_SetRenderDrawColor(Renderer, 0, 0, 255, 255);
        SDL_RenderClear(Renderer);
        SDL_RenderPresent(Renderer);

        sleep(1);

        // Indigo
        SDL_SetRenderDrawColor(Renderer, 75, 0, 130, 255);
        SDL_RenderClear(Renderer);
        SDL_RenderPresent(Renderer);

        sleep(1);

        // Violet
        SDL_SetRenderDrawColor(Renderer, 148, 0, 211, 255);
        SDL_RenderClear(Renderer);
        SDL_RenderPresent(Renderer);

        sleep(1);

        // Checking for app events
        while(SDL_PollEvent(&Event)){
            // Chencking for when the user quits
            if(Event.type == SDL_QUIT){
                // Finishing up.
                SDL_DestroyWindow(Window);
                std::cout << "We're done here.\n";
                SDL_Quit();
                Running = false;
            }
        }
    }
}
