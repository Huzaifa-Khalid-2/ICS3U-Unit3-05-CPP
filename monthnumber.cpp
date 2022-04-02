// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//

// Created by: Huzaifa Khalid
// Created on: March 2022
// This function takes a random integer between 1-12 from the user
// and tells them what the month is accordingly

#include <iostream>

int main() {
    // This function takes a random integer between 1-12 from the user
    // and tells them what the month is accordingly
    int number;

    // input
    std::cout << "Enter a integer: ";
    std::cin >> number;
    std::cout << " " << std::endl;

    // process and output
    // process and output
    switch (number) {
        case 1 :
            std::cout << "It's January." << std::endl;
            break;
        case 2 :
            std::cout << "It's February." <<std::endl;
            break;
        case 3 :
            std::cout << "It's March." << std::endl;
            break;
        case 4 :
            std::cout << "It's April." <<std::endl;
            break;
        case 5 :
            std::cout << "It's May." << std::endl;
            break;
        case 6 :
            std::cout << "It's June." <<std::endl;
            break;
        case 7 :
            std::cout << "It's July." << std::endl;
            break;
        case 8 :
            std::cout << "It's August." <<std::endl;
            break;
        case 9 :
            std::cout << "It's September." << std::endl;
            break;
        case 10 :
            std::cout << "It's October." << std::endl;
            break;
        case 11 :
            std::cout << "It's November." <<std::endl;
            break;
        case 12 :
            std::cout << "It's December." << std::endl;
            break;
        default :
            std::cout << "Sorry big man I got nothing (・_・ヾ"
                << std::endl;
    }
        std::cout << "\nDone.";
    }
