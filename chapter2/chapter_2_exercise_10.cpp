// Chapter 2 Exercise 10
// Basic Calculator - Prefix notation
// Prefix notation --> "operand" comes at the beginning of the line
// What we're used to have "infix", 3 + 5, in Prefix, + 3 5
#include <iostream>
#include <string>

int main() {
    std::string operand;
    double val1, val2;
    double result;

    std::cout << "Please enter calculation input: ";
    std::cin >> operand >> val1 >> val2;

    if (operand == "+") {
        result = val1 + val2;
    }
    if (operand == "-") {
        result = val1 - val2;
    }
    if (operand == "*") {
        result = val1 * val2;
    }
    if (operand == "/") {
        result = val1 / val2;
    }

    std::cout << val1 << " " << operand << " " << val2 << " = " << result << std::endl;

    return 0;
}