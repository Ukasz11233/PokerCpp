//
// Created by ukasz on 25.03.2023.
//

#include "card.h"

Card::Card(Suit _suit, Rank _rank) : cardSuit(_suit), cardRank(_rank) {}


std::ostream &operator<<(std::ostream &output, const Card &card) {
    output << "Card Suit: " <<  static_cast<int>(card.cardSuit) << " Rank: " << static_cast<int>(card.cardRank) + 2;
    return output;
}

std::string Card::toString() const
{
    std::ostringstream result;
    result << *this;
    return result.str();
}