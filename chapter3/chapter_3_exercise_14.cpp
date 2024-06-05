// Chapter 3 Exercise 14 - Calculate x Prime Numbers
#include <iostream>
#include <vector>

std::vector<int> get_first_n_primes(int n) {
    std::vector<int> primes = {2};
    int i = 2;
    while (primes.size() <= n) {        
        bool is_prime = true;
        for (int p : primes) {
            if (i % p == 0) {
                is_prime = false;
            }
        }

        if (is_prime) {
            primes.push_back(i);
        }
        ++i;
    }    

    return primes;
}

int main() {
    std::vector<int> first_100_primes = get_first_n_primes(100);
    std::cout << "First 100 primes: " << std::endl;
    for (int p : first_100_primes) {
        std::cout << p << std::endl;
    }    

    return 0;
}