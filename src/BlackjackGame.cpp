#include "../headers/BlackjackGame.h"
#include <iostream>


void BlackjackGame::play()
{
    while (true)
    {
        std::cout << "----- New Game -----" << std::endl;
        deck.shuffle();
        player.reset();
        dealer.reset();
        dealInitialCards();
        showCards();
        playPlayerTurn();
        if (!player.isBusted())
        {
            playDealerTurn();
        }
        showResult();
        if (!playAgain())
        {
            break;
        }
    }
}

void BlackjackGame::dealInitialCards()
{
    player.addCard(deck.dealCard());
    dealer.addCard(deck.dealCard());
    player.addCard(deck.dealCard());
    dealer.addCard(deck.dealCard());
}

void BlackjackGame::showCards() const
{
    dealer.showHand(false);
    player.showHand();
}

void BlackjackGame::playPlayerTurn()
{
    while (player.isHitting())
    {
        player.addCard(deck.dealCard());
        showCards();
        if (player.isBusted())
        {
            break;
        }
    }
}

void BlackjackGame::playDealerTurn()
{
    while (dealer.isHitting())
    {
        dealer.addCard(deck.dealCard());
    }
    dealer.showHand();
}

void BlackjackGame::showResult() const
{
    if (player.isBusted())
    {
        std::cout << "You busted. Dealer wins." << std::endl;
    } else if (dealer.isBusted())
    {
        std::cout << "Dealer busted. You win." << std::endl;
    } else if (player.getScore() > dealer.getScore())
    {
        std::cout << "You win!" << std::endl;
    } else if (dealer.getScore() > player.getScore())
    {
        std::cout << "Dealer wins." << std::endl;
    } else
    {
        std::cout << "It's a tie." << std::endl;
    }
}

bool BlackjackGame::playAgain() const
{
    std::cout << "Do you want to play again? (y/n): ";
    char choice;
    std::cin >> choice;
    return (choice == 'y' || choice == 'Y');
}
