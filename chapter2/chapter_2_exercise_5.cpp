// Chapter 2, Exercise 5
// Input 2 double, and figure out larger, sum, mul, etc...
#include <iostream>

int main() {
    double val1, val2;
    double smaller;
    double larger;
    double sum;
    double difference;
    double product;
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
    ratio = val1 / val2;

    std::cout << "Larger: " << larger << ", Smaller: " << smaller << std::endl;
    std::cout << "Sum: [" << sum << "], Difference: [" << difference << "]" << std::endl;
    std::cout << "Product: [" << product << "], Ratio: [" << ratio << "]" << std::endl;

    return 0;
}