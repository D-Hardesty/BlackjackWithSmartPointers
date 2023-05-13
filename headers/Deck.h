#ifndef BLACKJACKWITHSMARTPOINTERS_DECK_H
#define BLACKJACKWITHSMARTPOINTERS_DECK_H

#pragma once

#include <vector>
#include <memory>
#include <random>
#include <algorithm>
#include "Card.h"

class Deck
{
public:
    Deck();

    void shuffle();

    Card *dealCard();

private:
    std::vector<std::unique_ptr<Card>> cards;
    const std::vector<Suit> suits{Suit::HEARTS, Suit::DIAMONDS, Suit::CLUBS, Suit::SPADES};
    const std::vector<Value> values{Value::ACE, Value::TWO, Value::THREE, Value::FOUR, Value::FIVE, Value::SIX,
                                    Value::SEVEN, Value::EIGHT, Value::NINE, Value::TEN, Value::JACK, Value::QUEEN,
                                    Value::KING};
};

#endif //BLACKJACKWITHSMARTPOINTERS_DECK_H
