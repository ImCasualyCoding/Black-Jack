#include "Player.h"
#include <iostream>
#include <charconv> // For future-proofing or string handling

void Player::playTurn(Deck& deck) {
    char choice;
    bool staying = false;

    // The player's turn loop
    while (!isBust() && !staying) {
        std::cout << "\n" << name << ", your current score is: " << getScore() << "\n";
        std::cout << "Would you like to (h)it or (s)tand? ";
        std::cin >> choice;

        if (choice == 'h' || choice == 'H') {
            receiveCard(deck.draw());
            std::cout << "You drew a card. New score: " << getScore() << "\n";
        } 
        else if (choice == 's' || choice == 'S') {
            staying = true;
            std::cout << "You chose to stand.\n";
        } 
        else {
            std::cout << "Invalid choice. Please enter 'h' or 's'.\n";
        }
    }

    if (isBust()) {
        std::cout << "Bust! You went over 21.\n";
    }
}