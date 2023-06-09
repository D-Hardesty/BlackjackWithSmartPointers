#include <memory>
#include "../headers/Player.h"

Player::Player() : score(0)
{}

Player::~Player()
= default;

void Player::addCard(std::unique_ptr<Card> card)
{
    hand.emplace_back(std::move(card));
    score += hand.back()->getScore();
    if (score > 21 && hasAce())
    {
        score -= 10;
    }
}

bool Player::isBusted() const
{ return score > 21; }

int Player::getScore() const
{ return score; }

void Player::reset()
{
    score = 0;
    hand.clear();
}

void Player::showHand(bool showAllCards, bool isDealer) const
{
    (!isDealer) ? std::cout << "Player's Hand: " : std::cout << "Dealer's Hand : ";

    for (size_t i = 0; i < hand.size(); i++)
    {
        if (i == 0 && !showAllCards)
        {
            std::cout << "[Hidden]";
        } else
        {
            std::cout << *hand[i];
        }
        if (i < hand.size() - 1)
        {
            std::cout << ", ";
        }
    }
    (showAllCards) ? std::cout << " (" << score << ")" << std::endl : std::cout << " (?)" << std::endl;
}

bool Player::hasAce() const
{
    for (const auto &card: hand)
    {
        if (card->getValue() == Value::ACE)
        {
            return true;
        }
    }
    return false;
}