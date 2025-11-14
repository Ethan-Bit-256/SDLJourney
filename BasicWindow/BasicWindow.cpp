// Required includes
#include <iostream>
#include <SDL2/SDL.h>

int main(int argc, char * argv[]){
    // The Window
    SDL_Window* Window = SDL_CreateWindow("I won't write the generic \"Hello World\".", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);

    // The requireed variables to keep the program on and control it
    bool Running = true;
    SDL_Event Evt;

    // Main loop
    while(Running){
        // Event Polling
        while(SDL_PollEvent(&Evt)){
            // Checking if the exit button is pressed
            if (Evt.type == SDL_QUIT){
                std::cout << "Quitting.\n";

                // Turns everything off
                SDL_DestroyWindow(Window);
                SDL_Quit();
                Running = false;                               
            }
        }
    }
}
