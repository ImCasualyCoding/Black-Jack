#pragma once
#include "Participant.h"
#include "Deck.h"
class Player : public Participant {
    public:
            // Constructor: Takes a name from the user and passes it to the Participant base
        Player(std::string name) : Participant(name) {}

            // We implement the 'playTurn' contract specifically for a human
        void playTurn(Deck& deck) override;    
};