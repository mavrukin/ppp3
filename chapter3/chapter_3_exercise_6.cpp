// Chapter 3 Exercise 6 - Basic Calculator
#include <iostream>
#include <string>

int main() {
    double a, b;
    char op;
    double result;
    std::string word_operation;

    std::cout << "Please enter two doubles, then either a +, -, /, or *: ";
    std::cin >> a >> b >> op;

    switch(op) {
        case '+':
            result = a + b;
            word_operation = "adding";
            break;
        case '-':
            result = a - b;
            word_operation = "subtracting";
            break;
        case '/':
            result = a / b;
            word_operation = "dividing";
            break;
        case '*':
            result = a * b;
            word_operation = "multiplying";
            break;
    }

    std::cout << "The result of " << word_operation << " of " << a << " and " << b << " is = " << result << std::endl;

    return 0;
}
