// Copyright (c) 2022 Spencer Scarlett All rights reserved.
// .
// Created by: Spencer Scarlett
// Date: Oct 13, 2022
// This program checks what month you inputted.

#include <iostream>

int main() {
    // Initializing variables
    char inputMonth;

    // user input for month
    std::cout << "Enter a number that represents a month (A = January): ";
    std::cin >> inputMonth;

    // Checks the case for the correct month
    switch (inputMonth) {
        case 'A':
            std::cout << "A = January!" << std::endl;
            break;
        case 'B':
            std::cout << "B = February!" << std::endl;
            break;
        case 'C':
            std::cout << "C = March" << std::endl;
            break;
        case 'D':
            std::cout << "D = April" << std::endl;
            break;
        case 'E':
            std::cout << "E = May" << std::endl;
            break;
        case 'F':
            std::cout << "F = June!" << std::endl;
            break;
        case 'G':
            std::cout << "G = July!" << std::endl;
            break;
        case 'H':
            std::cout << "H = August" << std::endl;
            break;
        case 'I':
            std::cout << "I = September" << std::endl;
            break;
        case 'J':
            std::cout << "J = October" << std::endl;
            break;
        case 'K':
            std::cout << "K = November" << std::endl;
            break;
        case 'L':
            std::cout << "L = December" << std::endl;
            break;
        // Check to make sure the code works if something incorrect is inputted
        default:
            std::cout << "Invalid input, using numbers from A-I" << std::endl;
    }
}
