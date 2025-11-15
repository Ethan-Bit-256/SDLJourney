// The main header
#include "Portrait1.hpp"

int main(int argc, char* argv[]){

    // Defining the window & renderer
    Win = SDL_CreateWindow("A portrait", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 469, 349, SDL_WINDOW_SHOWN);
    Rend = SDL_CreateRenderer(Win, -1, 0);

    // Getting the bitmap for the portrait & making a texture for it
    Subject = SDL_LoadBMP("Subject.bmp");
    SubjectTex = SDL_CreateTextureFromSurface(Rend, Subject);

    SDL_FreeSurface(Subject);

    // For running the program
    Running = true;

    // Main loop
    while(Running){

        // Event polling
        while(SDL_PollEvent(&Evt)){

            // Rendering the portrait
            SDL_RenderClear(Rend);
            SDL_RenderCopy(Rend, SubjectTex, NULL, NULL);
            SDL_RenderPresent(Rend);

            // In case you want to ext the program
            if(Evt.type == SDL_QUIT){
                SDL_DestroyTexture(SubjectTex);
                SDL_DestroyWindow(Win);
                SDL_DestroyRenderer(Rend);
                SDL_Quit();
                Running = false;
            }
        }
    }
}

