//
// Created by ukasz on 25.03.2023.
//
#include <cstdint>
#include <iostream>
#include <sstream>
#include "../pokerCommon/suite.h"
#include "../pokerCommon/rank.h"
#ifndef TEMPLATETESTING_CARD_H
#define TEMPLATETESTING_CARD_H

class Card {
public:
    Card() {};
    Card(Suit _suit, Rank _rank);

    friend std::ostream &operator<<(std::ostream & output, const Card & card);

    std::string toString() const;

private:
    Suit cardSuit;
    Rank cardRank;

};


#endif //TEMPLATETESTING_CARD_H
