#ifndef BLACKJACKWITHSMARTPOINTERS_BLACKJACKGAME_H
#define BLACKJACKWITHSMARTPOINTERS_BLACKJACKGAME_H

#pragma once
#include "Deck.h"
#include "HumanPlayer.h"
#include "ComputerPlayer.h"

class BlackjackGame
{
public:
    void play();

private:
    void dealInitialCards();

    void showCards() const;

    void playPlayerTurn();

    void playDealerTurn();

    void showResult() const;

    bool playAgain() const;

    Deck deck;
    HumanPlayer player;
    ComputerPlayer dealer;
};

#endif //BLACKJACKWITHSMARTPOINTERS_BLACKJACKGAME_H
