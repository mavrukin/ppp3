// Chapter 2 Exercise 9
// convert "string" number to "int" number
#include <iostream>
#include <string>

int main() {
    std::string input;
    int entered_value = -1;

    std::cout << "Please enter a number written like 'zero' or 'two': ";
    std::cin >> input;

    if (input == "zero") {
        entered_value = 0;
    }
    if (input == "one") {
        entered_value = 1;
    }
    if (input == "two") {
        entered_value = 2;
    }
    if (input == "three") {
        entered_value = 3;
    }
    if (input == "four") {
        entered_value = 4;
    }

    if (entered_value != -1) {
        std::cout << "[" << input << "] is equal to [" << entered_value << "]" << std::endl;
    }
    if (entered_value == -1) {
        std::cout << "not a number I know" << std::endl;        
    }

    return 0;
}