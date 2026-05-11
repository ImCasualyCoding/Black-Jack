#include "GameController.h"
#include <iostream>

int main() {
    std::string name;
    std::cout << "Welcome to Blackjack! Enter your name: ";
    std::getline(std::cin, name);

    GameController game(name);
    game.run();

    return 0;
}