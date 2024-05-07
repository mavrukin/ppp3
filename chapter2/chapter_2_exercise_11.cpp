// Chapter 2 Exercise 11
// Ask the user to enter types of coins, and then tell us how much they
// have in total

#include <iostream>

int main() {
    int pennies, nickels, dimes, quarters, half_dollars, dollars;
    int total_amount;

    std::cout << "Please enter the number of pennies: ";
    std::cin >> pennies;
    std::cout << "Please enter the number of nickels: ";
    std::cin >> nickels;
    std::cout << "Please enter the number of dimes: ";
    std::cin >> dimes;
    std::cout << "Please enter the number of quarters: ";
    std::cin >> quarters;
    std::cout << "Please enter the number of half dollars: ";
    std::cin >> half_dollars;
    std::cout << "Please enter the number of dollars: ";
    std::cin >> dollars;

    total_amount = (pennies * 1) + (nickels * 5) + (dimes * 10) + 
                   (quarters * 25) + (half_dollars * 50) + (dollars * 100);

    std::cout << "You have " << pennies << " ";
    if (pennies > 1 || pennies == 0) {
        std::cout << "pennies";
    }
    if (pennies == 1) {
        std::cout << "penny";
    }
    std::cout << std::endl;

    std::cout << "You have " << nickels << " nickel";
    if (nickels > 1) {
        std::cout << "s";
    }
    std::cout << std::endl;

    std::cout << "You have " << dimes << " dime";
    if (dimes > 1) {
        std::cout << "s";
    }
    std::cout << std::endl;

    std::cout << "You have " << quarters << " quarter";
    if (quarters > 1) {
        std::cout << "s";
    }
    std::cout << std::endl;

    std::cout << "You have " << half_dollars << " half dollar";
    if (half_dollars > 1) {
        std::cout << "s";
    }
    std::cout << std::endl;

    std::cout << "You have " << dollars << " dollar";
    if (dollars > 1) {
        std::cout << "s";
    }
    std::cout << std::endl;

    std::cout << "For a total of $" << (total_amount / 100) << "." << (total_amount % 100) << std::endl;
    return 0;
}