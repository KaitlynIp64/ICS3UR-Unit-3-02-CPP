// Copyright (c) 2022 Kaitlyn Ip All rights reserved
//
// Created by: Kaitlyn Ip
// Created on: Oct 2022
// This program lets user guess the number

#include <iomanip>
#include <iostream>

int main() {
    // this function defines number
    const int CORRECT_ANSWER = 5;
    int userGuess;

    // input
    std::cout << "This is a number guessing game." << std::endl;
    std::cout << "Enter a number between 0-6: ";
    std::cin >> userGuess;

    // process
    if (userGuess == CORRECT_ANSWER) {
        // output
        std::cout << "You guessed the correct number!";
    }

    if (userGuess != CORRECT_ANSWER) {
        // output
        std::cout << "You guessed the wrong number! Try again!";
    }
    
    std::cout << "\nDone." << std::endl;
}
