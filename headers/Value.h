#ifndef BLACKJACKWITHSMARTPOINTERS_VALUE_H
#define BLACKJACKWITHSMARTPOINTERS_VALUE_H

#pragma once

#include <ostream>

enum class Value
{
    ACE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
};

std::ostream &operator<<(std::ostream &os, const Value &value);

#endif //BLACKJACKWITHSMARTPOINTERS_VALUE_H
