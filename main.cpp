#include <iostream>
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"

int main() {
    // Initialize the objects
    Deck deck;
    Player player("Brandon"); 
    Dealer dealer;

    std::cout << "--- Initializing Blackjack Test ---\n";
    deck.shuffle();

    // Simulate the first deal (2 cards each)
    player.receiveCard(deck.draw());
    dealer.receiveCard(deck.draw());
    player.receiveCard(deck.draw());
    dealer.receiveCard(deck.draw());

    // Display scores to verify Hand and Card logic
    std::cout << player.getName() << " score: " << player.getScore() << "\n";
    std::cout << dealer.getName() << " score: " << dealer.getScore() << "\n";

    if (player.isBust()) {
        std::cout << "Player busted on the deal!\n";
    } else {
        std::cout << "Systems check: Pass. Cards dealt and scores calculated.\n";
    }

    return 0;
}