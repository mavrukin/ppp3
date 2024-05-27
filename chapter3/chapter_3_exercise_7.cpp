// Chapter 3 Exercise 7 - Convert '2' --> "two" and "three" --> 3
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> numbers = {"zero", "one", "two",
        "three", "four", "five", "six", "seven", "eight", "nine"};
    std::string input;

    std::cout << "Please enter a single digit value between '0' and '9' or type out 'one', 'two', etc...: ";
    std::cin >> input;

    if (input.size() == 1) {
        int desired_number = (int)input[0] - '0';
        if (desired_number >= 0 && desired_number <= 9) {
            std::cout << "You chose: " << numbers[desired_number] << std::endl;
        } else {
            std::cout << "The entered value [" << input << "] was not a digit" << std::endl;
        }
    } else if (input.size() > 1) {
        bool found = false;
        for (int i = 0; i < numbers.size() && !found; ++i) {
            if (numbers[i] == input) {
                std::cout << "You chose: " << i << std::endl;
                found = true;
            }
        }
        if (!found) {
            std::cout << "The input [" << input << "] was not a digit or a typed out number" << std::endl;
        }
    }

    return 0;
}