// Chapter 3 Exercise 8 - Make a calculator that accepts 
// single digits as either '0', '2', '7' or as 'one', 'two'
// 'three'.  This is a modification / combination of 
// Exercise 6 and Exercise 7
#include <iostream>
#include <string>
#include <vector>

int get_number_from_user(std::string input) {
    std::vector<std::string> numbers = {"zero", "one", "two",
        "three", "four", "five", "six", "seven", "eight", "nine"};
    int number = -1;
    if (input.size() == 1) {
        int parsed_number = (int)input[0] - '0';
        if (parsed_number >= 0 && parsed_number <= 9) {
            number = parsed_number;
        } 
    } else if (input.size() > 1) {        
        for (int i = 0; i < numbers.size(); ++i) {
            if (numbers[i] == input) {
                number = i;                
            }
        }        
    }
    return number;
}

double calculate_result(double a, double b, char op) {
    double result = 0;
    switch(op) {
        case '+':
            result = a + b;            
            break;
        case '-':
            result = a - b;            
            break;
        case '/':
            result = a / b;            
            break;
        case '*':
            result = a * b;            
            break;
    }

    return result;
}


int main() {
    std::string input1, input2;
    char op;

    std::cout << "Please enter a calculation either as a digit '0' or written out 'zero': ";
    std::cin >> input1 >> input2 >> op;

    int parsed_number1 = get_number_from_user(input1);
    int parsed_number2 = get_number_from_user(input2);
    if (parsed_number1 != -1 && parsed_number2 != -1) {
        std::cout << input1 << " " << op << " " << input2 << " = " << 
        calculate_result(parsed_number1, parsed_number2, op) << std::endl;
    } else {
        std::cout << "The input values [" << input1 << "] or [" << input2 << "] were not valid";
        std::cout << std::endl;
    }

    return 0;
}