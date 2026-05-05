#include "Hand.h"

void Hand::addCard( Card card){
    cards.push_back(card);
}

void Hand::clear(){
    cards.clear();

}

const std::vector<Card>& Hand::getCards() const{
    return cards;
}

int Hand:: getTotalValue() const{
    int total = 0;
    int aceCount=0;

    for (const auto& card : cards){
        Rank r = card.rank;
        if (r<= Rank::Ten){
            total += static_cast<int>(r);
        }
        else if (r==Rank::Ace){
            aceCount++;
            total+=11;
        }
        else{
            total+=10;
        }

    }

    while (total>21 && aceCount>0){
        total-=10;
        aceCount--;
    }
    return total;
}