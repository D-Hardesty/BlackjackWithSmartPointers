#include "../headers/Card.h"

std::ostream &operator<<(std::ostream &os, const Card &card)
{
    os << card.getValue() << " of " << card.getSuit();
    return os;
}