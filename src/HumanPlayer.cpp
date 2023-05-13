#include "../headers/HumanPlayer.h"

bool HumanPlayer::isHitting() const
{
    std::cout << "Do you want to hit? (y/n): ";
    char choice;
    std::cin >> choice;
    (choice == 'y' || choice == 'Y') ? std::cout << "You Hit!" << std::endl : std::cout << "You Stay!" << std::endl;
    return (choice == 'y' || choice == 'Y');
}