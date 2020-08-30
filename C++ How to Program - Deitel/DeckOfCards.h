#ifndef DECKOFCARDS_H_
#define DECKOFCARDS_H_

#include "Card.h"

class DeckOfCards {
    private:
        Card deck[52];
        int currentCard;
    public:
    DeckOfCards();
    void shuffleCards();
    Card dealCard();
    bool moreCards();
};

#endif /* DECKOFCARDS_H_ */