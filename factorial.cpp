// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by: KestrelBryce
// Created on: Nov 1, 2022
// This program asks for a number
// and shows all the steps leading up to
// the factorial as well as the number's
// factorial itself

#include <cmath>
#include <iostream>
#include <string>

int main() {
    // Introductory paragraph
    std::cout << "This program asks for a number\n";
    std::cout << "and shows all the steps leading up to\n";
    std::cout << "the factorial as well as the number's\n";
    std::cout << "factorial itself\n";
    std::cout << "\n";

    // Initializing variables
    // Initializing factorialNum
    int factorialNum = 1;
    // Initializing counter
    int counter = 1;
    // Initializing userNumString
    std::string userNumString;
    // Initializing userNumInt
    int userNumInt;

    // Input
    // Getting userNumString
    std::cout << "Enter a positive number: ";
    std::cin >> userNumString;

    // Process
    // Checking that userNumString is an integer
    try {
        userNumInt = std::stoi(userNumString);
    } catch (std::invalid_argument) {
        std::cout << "\n";
        std::cout << "Please enter a positive number.\n";
    }

    // Checking that userNumInt is positive
    if (userNumInt < 0) {
        std::cout << "Please enter a positive number\n";
    }

    // Output
    do {
        // updating factorialNum
        factorialNum = factorialNum * counter;
        // Printing factorialNum
        std::cout << factorialNum;
        std::cout << "\n";
        // updating counter
        counter = counter + 1;
    } while (counter <= userNumInt);

    std::cout << "The factorial is ";
    std::cout << factorialNum;
    std::cout << "\n";
}
