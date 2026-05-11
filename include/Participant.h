#pragma once
#include "Hand.h"
#include <string>

class Participant{
protected:
    // here only sub classes can see this information while everything else can not
    Hand hand;
    std::string name;

public:
    Participant(std:: string n) : name(n) {}

    //Virtual destructor for inheritance
    virtual ~Participant()= default;

    //Virtual function makes teh class abstract
    // Every participant must have a turn, but will define later
    virtual void playTurn(class Deck& deck)=0; 

    // Common actions for both Player and Dealer
    void receiveCard(Card card) {hand.addCard(card);}
    int getScore() const {return hand.getTotalValue();}
    bool isBust() const {return getScore()>21;}

    void resetHand() {hand.clear();}
    std::string getName() const {return name;}
    const Hand& getHand() const {return hand;}
};