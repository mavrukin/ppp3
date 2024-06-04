// Chapter 3 Exercise 12 - Calculate Prime Numbers
#include <iostream>
#include <vector>

std::vector<int> get_primes_up_to(int n) {
    std::vector<int> primes = {2};

    for (int i = 2; i <= n; ++i) {
        bool is_prime = true;
        for (int p : primes) {
            if (i % p == 0) {
                is_prime = false;
            }
        }

        if (is_prime) {
            primes.push_back(i);
        }
    }

    return primes;
}

int main() {
    std::vector<int> primes_to_100 = get_primes_up_to(100);
    std::cout << "Primes to 100: " << std::endl;
    for (int p : primes_to_100) {
        std::cout << p << std::endl;
    }
    std::cout << "There are a total of [" << primes_to_100.size() << "] primes numbers between 1 and 100" << std::endl;

    return 0;
}