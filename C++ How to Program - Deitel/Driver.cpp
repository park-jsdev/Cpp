#include <iostream>
#include <iomanip>
#include "card.h"
#include "DeckOfCards.h"

using namespace std;

int main() {
DeckOfCards doc;
doc.shuffleCards();

int j=0;
while (doc.moreCards()) {
    Card c = doc.dealCard();
    cout << setw(20) << c.toString();
        if (++j % 4 == 0) {
            j=0;
            cout << endl;
        }
    }
}