#include "Card.h"

const std::string Card::faces[] = {"Ace", "1", "2", "3", "4", "5", "6", "7", "8", "9",
"Jack", "Queen", "King"};
const std::string Card::suits[] = {"Spade", "Heart", "Diamond", "Club"};

Card::Card(){
face = 0;
suit = 0;
}
Card::Card(int suit, int face) {
this->face = face;
this->suit = suit;
}

Card::~Card() {
}

std::string Card::toString(){
return Card::faces[face] + " of " + Card::suits[suit];
}