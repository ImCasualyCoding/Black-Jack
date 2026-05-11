#pragma once 
#include <vector>
#include "Card.h" 

class Deck {
private:
    // This is our 'member variable'. It belongs to the Deck class.
    // We use std::vector because it's a dynamic array that can grow/shrink.
    // It stores 'Card' objects.
    std::vector<Card> cards; 

public:
    // This is the Constructor. It runs automatically the moment 
    // a Deck object is created (e.g., Deck myDeck;).
    Deck();

    // These are methods (functions). 
    // They define what a Deck can DO.
    void shuffle();
    
    // Returns a Card object to whoever called it.
    Card draw();
};