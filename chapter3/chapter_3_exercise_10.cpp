// Chapter 3 Exercise 10 - Same as 9, but w/ doubles
#include <iostream>

int main() {
    double starting_square_grains = 1;
    constexpr int multiplication_factor = 2;
    double total_grains_so_far = 0;
    int grains_for_1000 = -1;
    int grains_for_1_000_000 = -1;
    int grains_for_1_000_000_000 = -1;

    for (int i = 1; i <= 64; ++i) {
        total_grains_so_far += starting_square_grains;
        if (grains_for_1000 == -1 && total_grains_so_far >= 1000) {
            grains_for_1000 = i;
        }
        if (grains_for_1_000_000 == -1 && total_grains_so_far >= 1000000) {
            grains_for_1_000_000 = i;
        }
        if (grains_for_1_000_000_000 == -1 && total_grains_so_far >= 1000000000) {
            grains_for_1_000_000_000 = i;
        }
        starting_square_grains *= multiplication_factor;

        std::cout << "Current Square: " << i << std::endl;
        std::cout << "Total Grains So Far: " << total_grains_so_far << std::endl;
        std::cout << "Current Multiple: " << starting_square_grains << std::endl;
    }

    std::cout << "Squares for 1,000: " << grains_for_1000 << std::endl;
    std::cout << "Squares for 1,000,000: " << grains_for_1_000_000 << std::endl;
    std::cout << "Squares for 1,000,000,000: " << grains_for_1_000_000_000 << std::endl;

    return 0;
}