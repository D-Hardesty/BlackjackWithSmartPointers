#ifndef BLACKJACKWITHSMARTPOINTERS_PLAYER_H
#define BLACKJACKWITHSMARTPOINTERS_PLAYER_H

#pragma once
#include "Card.h"
#include <iostream>
#include <vector>

class Player
{
public:
    Player();

    virtual ~Player();

    void addCard(Card *card);

    virtual bool isHitting() const = 0;

    bool isBusted() const;

    int getScore() const;

    void reset();

    void showHand(bool showAllCards = true, bool isDealer = false) const;

    bool hasAce() const;

protected:
    std::vector<Card *> hand;
    int score;
};


#endif //BLACKJACKWITHSMARTPOINTERS_PLAYER_H
