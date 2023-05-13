#include "../headers/HumanPlayer.h"

bool HumanPlayer::isHitting() const
{
    std::cout << "Do you want to hit? (y/n): ";
    char choice;
    std::cin >> choice;
    return (choice == 'y' || choice == 'Y');
}