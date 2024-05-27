// Chapter 3 Exercise 5 - Basic guessing game for numbers 
// between 0 and 100 in 7 guesses or less
#include <iostream>

int main() {
    int guesses = 0;
    int lower_bound = 1;
    int upper_bound = 100;
    bool guessed = false;
    char input;
    int guess = 0;

    while (guesses < 7 && !guessed) {
        guess = (upper_bound - lower_bound) / 2 + lower_bound;
        std::cout << "Please choose 'c' for correct, 'h' for too high, and 'l' for too low" << std::endl;
        std::cout << "Is the number you are thinking of: " << guess << std::endl;
        std::cin >> input;

        if (input == 'c') {
            guessed = true;            
        } else if (input == 'h') {
            upper_bound = guess - 1;
        } else {
            lower_bound = guess + 1;
        }

        ++guesses;
    }

    if (guessed) {
        std::cout << "Yay, we guessed the right number: " << guess << std::endl;
    } else {
        std::cout << "Ouch, we'll try again next time" << std::endl;
    }

    return 0;
}