// Chapter 3 Exercise 15 - Compute Mode
// This solution will use two vectors, one for values 
// and one for frequencies
#include <iostream>
#include <vector>

int find_index_of_value(std::vector<double> values, double value) {
    int found = -1;
    for (int i = 0; i < values.size() && found == -1; ++i) {
        if (values[i] == value) {
            found = i;
        }
    }

    return found;
}

int main() {
    std::vector<double> values = {};
    std::vector<int> frequencies = {};
    double value;

    while (std::cin >> value) {
        int value_index = find_index_of_value(values, value);
        if (value_index == -1) {
            values.push_back(value);
            frequencies.push_back(1);
        } else {
            frequencies[value_index] += 1;
        }
    }

    for (int i = 0; i < values.size(); ++i) {
        std::cout << values[i] << " - " << frequencies[i] << std::endl;
    }

    return 0;
}