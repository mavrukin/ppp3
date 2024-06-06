// Chapter 3 Exercise 17 - Quadratic Equation
// x = (-b +/- sqrt(b^2 - 4ac)) / 2a
#include <cmath>
#include <iostream>

int main() {
    double a, b, c;
    std::cout << "Please enter the a, b, and c coefficents: ";
    std::cin >> a >> b >> c;

    double x_1, x_2;
    double sqrt_part = pow(b, 2) - 4 * a * c;
    if (sqrt_part < 1) {
        std::cout << "The equation does not have a solution, because the sqrt part is negative: " 
                  << sqrt_part << std::endl;
    } else {
        x_1 = ((b * -1) + sqrt(sqrt_part)) / (2 * a);
        x_2 = ((b * -1) - sqrt(sqrt_part)) / (2 * a);
        std::cout << "The solutions are: x1 = [" << x_1 << "], x2 = [" << x_2 << "]" << std::endl;
    }

    return 0;    
}