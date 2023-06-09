#ifndef BLACKJACKWITHSMARTPOINTERS_HUMANPLAYER_H
#define BLACKJACKWITHSMARTPOINTERS_HUMANPLAYER_H

#pragma once

#include <iostream>
#include "Player.h"

class HumanPlayer : public Player
{
public:
    bool isHitting() const override;
};

#endif //BLACKJACKWITHSMARTPOINTERS_HUMANPLAYER_H
