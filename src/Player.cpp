#include "../headers/Player.h"

Player::Player() : score(0)
{}

Player::~Player()
{}

void Player::addCard(Card *card)
{
    hand.push_back(card);
    score += card->getScore();
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

void Player::showHand(bool showAllCards) const
{
    std::cout << "Player's Hand: ";
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
    std::cout << " (" << score << ")" << std::endl;
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