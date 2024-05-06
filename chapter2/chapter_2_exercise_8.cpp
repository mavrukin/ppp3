// Chapter 2 Exercise 8
// To print out whether a number is odd or even

// What is the '%' operator?
// If we think of division, 7/3 --> 2.3333
// 7/3 ---> rounded to 2
// If you wanted to know what is the "remainder?"
// 7/3 ---> 2r1,  % --> pulls out the "1"
// Ex: 11/4 --> 3r3, % --> pulls out the "3"

// What is odd / even?  
// If you are diving by '2', you can two remainders:
//  -- Remainder: 0 --> Even
//  -- Remainder: 1 --> Odd
#include <iostream>

int main() {
    int value;

    std::cout << "Please enter a number: ";
    std::cin >> value;

    std::cout << "The value " << value << " is an ";
    if (value % 2 == 0) {
        std::cout << "even";        
    }
    if (value % 2 == 1) {
        std::cout << "odd";
    }
    std::cout << " number." << std::endl;    

    return 0;
}