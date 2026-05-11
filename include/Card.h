#pragma once 

enum class Suit {Hearts,Diamonds,Clubs,Spades};

enum class Rank{
    Two=2, Three, Four, Five, Six, Seven, Eight, Nine, Ten,
    Jack, Queen, King, Ace
};

struct Card {
    Rank rank; 
    Suit suit;
};

/*

enum short for enumuration

essentially give the suits and rank a name and a value
so hearts = 0, diamonds = 1, clubs = 2, spades = 3
and two = 2, three = 3, four = 4, and so forth

rather of 0 we use Suit::Hearts


*/

