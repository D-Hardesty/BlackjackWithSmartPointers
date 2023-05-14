#ifndef BLACKJACKWITHSMARTPOINTERS_CARD_H
#define BLACKJACKWITHSMARTPOINTERS_CARD_H

#pragma once

#include "Suit.h"
#include "Value.h"
#include <ostream>

class Card
{
public:
    Card(Suit s, Value v) : suit(s), value(v)
    {}

    Suit getSuit() const
    { return suit; }

    Value getValue() const
    { return value; }

    int getScore() const
    { return (value == Value::ACE) ? 11 : ((value > Value::TEN) ? 10 : static_cast<int>(value)); }

    friend std::ostream &operator<<(std::ostream &os, const Card &card);

private:
    Suit suit;
    Value value;
};

#endif //BLACKJACKWITHSMARTPOINTERS_CARD_H
