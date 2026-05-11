#pragma once
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"


class GameController {
private:
    Deck deck;
    Player player;
    Dealer dealer;

    // Helper methods to keep the main loop clean
    void initialDeal();
    void showState() const;
    void determineWinner() const;

public:
    // Initialize the game with the player's name
    GameController(std::string playerName);

    // The main game loop
    void run();
};