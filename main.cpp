#include "GameController.h"
#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name to play: ";
    std::getline(std::cin, name);

    // Create the game instance
    GameController game(name);

    // Run the game loop
    game.run();

    return 0;
}