#include "headers/Value.h"

std::ostream& operator<<(std::ostream& os, const Value& value)
{
    switch (value)
    {
        case Value::ACE:
            os << "Ace";
            break;
        case Value::TWO:
            os << "2";
            break;
        case Value::THREE:
            os << "3";
            break;
        case Value::FOUR:
            os << "4";
            break;
        case Value::FIVE:
            os << "5";
            break;
        case Value::SIX:
            os << "6";
            break;
        case Value::SEVEN:
            os << "7";
            break;
        case Value::EIGHT:
            os << "8";
            break;
        case Value::NINE:
            os << "9";
            break;
        case Value::TEN:
            os << "10";
            break;
        case Value::JACK:
            os << "Jack";
            break;
        case Value::QUEEN:
            os << "Queen";
            break;
        case Value::KING:
            os << "King";
            break;
    }
    return os;
}