// Chapter 2, Exercise 4
// Input 2 integers, and figure out larger, sum, mul, etc...
#include <iostream>

int main() {
    int val1, val2;
    int smaller;
    int larger;
    int sum;
    int difference;
    int product;
    double ratio;

    std::cout << "Please enter two integers, separated by space: ";
    std::cin >> val1 >> val2;

    if (val1 < val2) {
        smaller = val1;
        larger = val2;
    }
    if (val2 <= val1) {
        smaller = val2;
        larger = val1;
    }

    sum = val1 + val2;
    difference = val1 - val2;
    product = val1 * val2;
    ratio = (double)val1 / val2;

    std::cout << "Larger: " << larger << ", Smaller: " << smaller << std::endl;
    std::cout << "Sum: [" << sum << "], Difference: [" << difference << "]" << std::endl;
    std::cout << "Product: [" << product << "], Ratio: [" << ratio << "]" << std::endl;

    return 0;
}