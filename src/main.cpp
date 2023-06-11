#include <SDL2/SDL.h>
#include <iostream>

#define null NULL 
#define None NULL //i hate being able to code in both python and c++
#define none NULL //i hate being able to code in both python and c++

#define True true //i hate being able to code in both python and c++
#define False false //i hate being able to code in both python and c++

int main(int argc, char* argv[]) {
    // Initialize SDL
    std::cout << "initalising SDL_VIDEO" << std::endl;
    SDL_Init(SDL_INIT_VIDEO);

    // Create a window
    std::cout << "Creating Window" << std::endl;
    SDL_Window* window = SDL_CreateWindow("MTA Player", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);

    // Create a renderer
    std::cout << "initalising Renderer" << std::endl;
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

    // Event loop
    std::cout << "initalising Run Loop" << std::endl;
    bool running = true;
    while (running) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
        }

        // Clear the screen
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        // Draw your GUI elements here
        auto sidebar = null;

        // Update the screen
        SDL_RenderPresent(renderer);
    }

    // Cleanup
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
