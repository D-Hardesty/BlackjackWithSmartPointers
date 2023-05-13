cmake_minimum_required(VERSION 3.25)
project(BlackjackWithSmartPointers)

set(CMAKE_CXX_STANDARD 20)

add_executable(BlackjackWithSmartPointers src/main.cpp headers/BlackjackGame.h
        headers/Player.h headers/HumanPlayer.h headers/ComputerPlayer.h
        headers/Deck.h src/Card.cpp headers/Card.h headers/Suit.h headers/Value.h src/BlackjackGame.cpp src/Deck.cpp src/ComputerPlayer.cpp src/HumanPlayer.cpp src/Player.cpp src/Value.cpp src/Suit.cpp)
