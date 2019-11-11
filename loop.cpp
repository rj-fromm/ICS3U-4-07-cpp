// Copyright (c) 2019 RJ Fromm All rights reserved.
//
// Created by: RJ Fromm
// Created on: November 2019
// This program shows years
// with user input

#include <iostream>
#include <cstdlib>
#include <string>



int main() {
    int number = 0;


    // process
    for (number = 1000; number < 2001; number++) {
        // output
        std::cout << "" << number << " ";
        if (number % 5 == 0) {
            std::cout << "" << std::endl;
        }
    }
}
