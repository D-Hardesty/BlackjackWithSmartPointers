#include "../headers/Suit.h"

std::ostream &operator<<(std::ostream &os, const Suit &suit)
{
    switch (suit)
    {
        case Suit::CLUBS:
            os << "Clubs";
            break;
        case Suit::DIAMONDS:
            os << "Diamonds";
            break;
        case Suit::HEARTS:
            os << "Hearts";
            break;
        case Suit::SPADES:
            os << "Spades";
            break;
    }
    return os;
}