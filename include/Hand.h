#pragma once
#include <vector>
#include "Card.h"   

class Hand {
private:
    // A hand is bassically a collection of cards
    std::vector<Card> cards;

public:
    //Adds a card to the hand (usually called after Deck::draw())
    void addCard(Card card);

    void clear();

    int getTotalValue() const;

    // Helper to see the Cards 
    const std::vector<Card>& getCards() const;

};