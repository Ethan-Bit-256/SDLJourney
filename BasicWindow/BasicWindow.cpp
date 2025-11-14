#include <iostream>
#include <SDL2/SDL.h>

int main(int argc, char * argv[]){
    SDL_Window* Window = SDL_CreateWindow("I won't write the generic \"Hello World\".", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);

    bool Running = true;
    SDL_Event Evt;

    while(Running){
        while(SDL_PollEvent(&Evt)){
            if (Evt.type == SDL_QUIT){
                std::cout << "Quitting.\n";

                SDL_DestroyWindow(Window);
                SDL_Quit();

                Running = false;                               
            }
        }
    }
}
