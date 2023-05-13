cmake_minimum_required(VERSION 3.25)
project(BlackjackWithSmartPointers)

set(CMAKE_CXX_STANDARD 20)

add_executable(BlackjackWithSmartPointers main.cpp headers/BlackjackGame.h
        headers/Player.h headers/HumanPlayer.h headers/ComputerPlayer.h
        headers/Deck.h Card.cpp headers/Card.h headers/Suit.h headers/Value.h BlackjackGame.cpp Deck.cpp ComputerPlayer.cpp HumanPlayer.cpp Player.cpp Value.cpp Suit.cpp)
