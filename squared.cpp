// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 10/01/2021
// This is the Squared Loop program
// The user enters in a positive integer
// The program tells the user the squared answer
// To all the numbers from 0 to the number typed in

#include <iostream>

int main() {
    // this function uses a for loop and calculates the square
    int loopCounter = 0;
    int answer = 1;
    std::string numberAsString;
    int numberAsInteger;
    int rangeNumber;
    float numberAsFloat;

    // input
    std::cout << "Enter in a integer >= 0: ";
    std::cin >> numberAsString;
    std::cout << "" << std::endl;

    // process and output
    try {
        // convert string to integer and float
        numberAsInteger = std::stoi(numberAsString);
        numberAsFloat = std::stof(numberAsString);
        rangeNumber = numberAsInteger + 1;

        if (numberAsInteger == numberAsFloat) {
            for (loopCounter = 0; loopCounter < rangeNumber; loopCounter++) {
                answer = loopCounter * loopCounter;
                std::cout << loopCounter << "²" << "=" << answer << std::endl;
            }
        } else {
        std::cout << "You didn't enter in a positive integer" << std::endl;
        }
    }catch (std::invalid_argument) {
        std::cout << "You didn’t enter in a positive integer" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
