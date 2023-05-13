#ifndef BLACKJACKWITHSMARTPOINTERS_SUIT_H
#define BLACKJACKWITHSMARTPOINTERS_SUIT_H

#pragma once

#include <ostream>

enum class Suit
{
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES
};

std::ostream &operator<<(std::ostream &os, const Suit &suit);

#endif //BLACKJACKWITHSMARTPOINTERS_SUIT_H
