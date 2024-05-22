// PPP - Chapter 3 - Exercise 2
#include <iostream>
#include <string>

int main() {
    std::string input;

    std::cout << "Please enter a word: ";
    std::cin >> input;

    std::cout << "The string, character by character: " << std::endl;
    for (char c : input) {
        std::cout << c << " in ascii = " << (int)c << std::endl;
    }

    return 0;
}