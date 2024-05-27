// Chapter 3 Exercise 4 - Find the following attributes
// of an input of doubles: min, max, sum, and mean
#include <iostream>
#include <limits>
#include <vector>

int main() {
    std::vector<double> distances;
    double min_distance = std::numeric_limits<double>::max();
    double max_distance = std::numeric_limits<double>::min();
    double total_distance = 0;
    double mean = 0;

    std::cout << "Please enter distances between cities, ctrl-d to finish: " << std::endl;
    for (double d; std::cin >> d;)
        distances.push_back(d);

    for (double d : distances) {
        if (d < min_distance) 
            min_distance = d;
        if (d > max_distance)
            max_distance = d;
        total_distance += d;
    }
    mean = total_distance / distances.size();

    std::cout << "Max [" << max_distance << "] Min [" << min_distance << "]" << std::endl;
    std::cout << "Total Distance [" << total_distance << "] Mean [" << mean << "]" << std::endl;

    return 0;
}