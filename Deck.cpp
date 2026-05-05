#include "Deck.h"
#include <algorithm>
#include <random>

// The :: (scope resolution operator) tells the compiler:
// "This function belongs to the Deck class defined in the header."
Deck::Deck(){

    // OUTER LOOP: Iterates through the 4 suits (0 to 3)
    for (int s = 0; s <= 3; ++s)
    {
        // INNER LOOP: Iterates through the 13 ranks (2 to 14)
        for (int r = 2; r <= 14; ++r)
        {
             // 1. Create a temporary Card object on the stack
             Card newCard;

             // 2. static_cast: We convert the integer 's' into a 'Suit' type 
             // and the integer 'r' into a 'Rank' type.
             newCard.suit = static_cast<Suit>(s);
             newCard.rank = static_cast<Rank>(r);

             // 3. push_back: We copy this new card into our 'cards' vector.
             // This happens 52 times total (4 suits * 13 ranks).
             cards.push_back(newCard);
        }
    }
}