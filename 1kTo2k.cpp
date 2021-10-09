// Copyright (c) Crestel Ong All rights reserved
//
// Created by: Crestel
// Created on: October 2021
// This is the 1k to 2k program

#include <iostream>

int main() {
    // declaring
    int counter;

    // This function has about nested loops
    // it prints out the numbers in the range, 5 #s per line

    // process and output
    for (counter = 1000; counter < 2001; counter++) {
        if ((counter + 1) % 5 == 0) {
                std::cout << counter << std::endl;
        } else {
            std::cout << counter << " ";
        }
    }
std::cout << "" << std::endl;
std::cout << "\nDone." << std::endl;
}
