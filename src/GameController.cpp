#include "GameController.h"
#include <iostream>

// Constructor: Initializes the player with a name
GameController::GameController(std::string playerName) 
    : player(playerName), dealer() {}

void GameController::initialDeal() {
    // Standard Blackjack start: 2 cards each
    player.receiveCard(deck.draw());
    dealer.receiveCard(deck.draw());
    player.receiveCard(deck.draw());
    dealer.receiveCard(deck.draw());
}

void GameController::determineWinner() const {
    int pScore = player.getScore();
    int dScore = dealer.getScore();

    std::cout << "\n--- Final Results ---\n";
    std::cout << player.getName() << ": " << pScore << "\n";
    std::cout << "Dealer: " << dScore << "\n";

    if (player.isBust()) {
        std::cout << "You busted! Dealer wins.\n";
    } else if (dealer.isBust()) {
        std::cout << "Dealer busted! You win!\n";
    } else if (pScore > dScore) {
        std::cout << "You win!\n";
    } else if (dScore > pScore) {
        std::cout << "Dealer wins.\n";
    } else {
        std::cout << "It's a push (tie)!\n";
    }
}

void GameController::run() {
    std::cout << "Welcome to C++ Blackjack, " << player.getName() << "!\n";
    
    deck.shuffle();
    initialDeal();

    // Player Phase
    player.playTurn(deck);

    // Dealer Phase (only happens if player didn't bust)
    if (!player.isBust()) {
        dealer.playTurn(deck);
    }

    // Resolution Phase
    determineWinner();
}