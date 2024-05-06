// Convert input miles into kilometers
#include <iostream>

int main() {
  double miles = 0.0;
  double kilometers = 0.0;
  double conversion = 1.609;

  std::cout << "Please enter distance in Miles: ";
  std::cin >> miles;
  kilometers = miles * conversion;
  std::cout << miles << " Miles in Kilometers is: " << kilometers << std::endl;

  return 0;
}