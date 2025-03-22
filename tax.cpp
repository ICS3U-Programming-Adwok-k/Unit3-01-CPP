// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: March 22nd, 2025
// Thi sprogram will allow a user to enter
// a subtotal, and then display the tax and the
// total including tax

#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    //
    const float TAX_RATE_NOVA_SCOTIA = 15.0;
    float subtotal;
    float total;

    //
    std::cout << "Enter the subtotal: $";
    std::cin >> subtotal;

    //
    const float tax = subtotal * (TAX_RATE_NOVA_SCOTIA /100.0);
    total = subtotal + tax;

    //
    std::cout << "" << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "You entered a subtotal of $ " << subtotal << std::endl;
    std::cout << "The HST is $" << tax <<" and the total is $" << total;
}
