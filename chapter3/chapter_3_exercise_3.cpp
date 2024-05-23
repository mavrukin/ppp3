// Programming Principles and Practice - Chapter 3 Exercise 3
// Fix the median calculation to work with even number of items
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<double> temps;
    std::cout << "Please enter a sequence of doubles, when done, ctrl-d: " << std::endl;
    for (double temp; std::cin >> temp; )
        temps.push_back(temp);

    // Compute mean temperature
    double sum = 0;
    for (double x : temps) 
        sum += x;
    std::cout << "Average temperature: " << sum / temps.size() << '\n';

    std::ranges::sort(temps);
    // Fix median implementation here
    double median = 0;
    if (temps.size() > 0) {
        if (temps.size() % 2 == 0) {            
            // Even number of elements
            // 2 / 2 --> 1, 0th & 1st, 8 / 2 --> 4, 3-index & 4-index            
            median = (temps[temps.size() / 2 - 1] + temps[temps.size() / 2]) / 2;
        } else {
            // Odd number of elements
            // 1 / 2 --> 0, 3 / 2 --> 1, 7 / 2 --> 3
            median = temps[temps.size() / 2];
        }
    }    
    std::cout << "Median temperature: " << median << '\n';

    return 0;
}