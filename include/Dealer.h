#pragma once
#include "Participant.h"
#include "Deck.h"

class Dealer : public Participant {
  public:
   // pass "Dealer as the name to the base participant class constructor"
    Dealer () : Participant("Dealer") {}
    
    // override the pure virtual functiuon from participant
    void playTurn(Deck& deck) override;
};