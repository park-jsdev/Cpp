#ifndef CARD_H_
#define CARD_H_

#include <string>

class Card {
private:
    int face;
    int suit;
public:
    static const std::string faces[];
    static const std::string suits[];
    Card();
    Card(int suit, int face);
virtual ~Card();
std::string toString();
};
#endif /* CARD_H_ */