// Chapter 3 Exercise 16 - Compute Mode, Min, and Max for strings
#include <iostream>
#include <string>
#include <vector>

int find_index_of_value(std::vector<std::string> values, std::string value) {
    int found = -1;
    for (int i = 0; i < values.size() && found == -1; ++i) {
        if (values[i] == value) {
            found = i;
        }
    }

    return found;
}

int main() {
    std::vector<std::string> values = {};
    std::vector<int> frequencies = {};
    std::string value;
    std::string min = "";
    std::string max = "";

    while (std::cin >> value) {
        int value_index = find_index_of_value(values, value);
        
        if (min == "") {
            min = value;
        }
        if (max == "") {
            max = value;
        }

        if (value < min) {
            min = value;
        }
        if (value > max) {
            max = value;
        }

        if (value_index == -1) {
            values.push_back(value);
            frequencies.push_back(1);
        } else {
            frequencies[value_index] += 1;
        }
    }

    std::cout << std::endl;
    for (int i = 0; i < values.size(); ++i) {
        std::cout << values[i] << " - " << frequencies[i] << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Min String: " << min << ", Max String: " << max << std::endl;

    return 0;
}