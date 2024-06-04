// Chapter 3 Exercise 13 - Sieve of Eratosthenes Prime Numbers
#include <iostream>
#include <vector>

std::vector<int> primes_up_to_n(int n) {
    std::vector<bool> sieve = {};
    std::vector<int> primes = {};

    for (int i = 2; i <= n; ++i) {
        sieve.push_back(true);
    }

    for (int i = 2; i <= n; ++i) {
        for (int j = i * i; j <= n; j += i) {
            sieve[j - 2] = false;
        }
    }

    for (int i = 0; i < sieve.size(); ++i) {
        if (sieve[i]) {
            primes.push_back(i + 2);
        }
    }

    return primes;
}

int main() {
    std::vector<int> primes = primes_up_to_n(1000);
    for (int p : primes) {
        std::cout << p << std::endl;
    }
    
    return 0;
}