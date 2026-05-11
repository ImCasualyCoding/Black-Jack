#include "Dealer.h"
#include <iostream>

void Dealer :: playTurn (Deck& deck){
  

    while (getScore()<17){
        std::cout <<"Dealer hits.\n";
        receiveCard(deck.draw());
    }

    if (isBust()){
        std::cout <<"Dealer busts with a score of " << getScore() << "!\n";
    }
    else{
        std::cout <<"Dealer stands with a score of " << getScore() << ".\n";
    }
}