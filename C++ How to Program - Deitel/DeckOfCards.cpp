#include <stdlib.h>
#include "DeckOfCards.h"

DeckOfCards::DeckOfCards() {
    for(int i=0; i<4; i++)
        for(int j=0; j<13; j++)
            deck[i*13+j] = Card(i, j);
            currentCard = 0;
}

void DeckOfCards::shuffleCards(){
    for(int i=0; i<52; i++){
        int rnd = rand()%52;
        Card temp = deck[i];
        deck[i] = deck[rnd];
        deck[rnd] = temp;
    }
}

Card DeckOfCards::dealCard() {
    return deck[currentCard++];
}

bool DeckOfCards::moreCards(){
    return currentCard != 52;
}