#include "headers/Deck.h"

Deck::Deck()
{
    for (const auto &suit: suits)
    {
        for (const auto &value: values)
        {
            cards.emplace_back(std::make_unique<Card>(suit, value));
        }
    }
    shuffle();
}

void Deck::shuffle()
{
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}

Card *Deck::dealCard()
{
    if (cards.empty())
    {
        return nullptr;
    }
    auto card = cards.back().get();
    cards.pop_back();
    return card;
}

std::vector<std::unique_ptr<Card>> cards;
const std::vector<Suit> suits{Suit::HEARTS, Suit::DIAMONDS, Suit::CLUBS, Suit::SPADES};
const std::vector<Value> values{Value::ACE, Value::TWO, Value::THREE, Value::FOUR, Value::FIVE, Value::SIX,
                                Value::SEVEN, Value::EIGHT, Value::NINE, Value::TEN, Value::JACK, Value::QUEEN,
                                Value::KING};