// Chapter 2 Exercise 7
// Enter 3 Strings, and order them from smallest to largest

#include <iostream>
#include <string>

int main() {
    std::string val1, val2, val3;
    std::string smallest, middle, largest;

    std::cout << "Please enter 3 strings seperated by a space: ";
    std::cin >> val1 >> val2 >> val3;

    if (val1 <= val2 && val2 <= val3) {
        smallest = val1;
        if (val2 <= val3) {
            middle = val2;
            largest = val3;
        }
        if (val3 <= val2) {
            middle = val3;
            largest = val2;
        }
    }
    
    if (val2 <= val1 && val2 <= val3) {
        smallest = val2;
        if (val1 <= val3) {
            middle = val1;
            largest = val3;
        }
        if (val3 <= val1) {
            middle = val3;
            largest = val1;
        }
    }

    if (val3 <= val1 && val3 <= val2) {
        smallest = val3;
        if (val1 <= val2) {
            middle = val1;
            largest = val2;
        }
        if (val2 <= val1) {
            middle = val2;
            largest = val1;
        }
    }

    std::cout << "In order from smallest to largest: " 
        << smallest << ", " << middle << ", " << largest << std::endl;

    return 0;
}