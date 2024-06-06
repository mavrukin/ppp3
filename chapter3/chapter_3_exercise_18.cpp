// Chapter 3 Exercise 18 - Name-Score Pairs using vectors
#include <iostream>
#include <string>
#include <vector>

bool name_in_vector(std::vector<std::string> names, std::string name) {
    for (std::string n : names) {
        if (n == name) {
            return true;
        }
    }

    return false;
}

void print_name_score_pairs(std::vector<std::string> names, std::vector<int> scores) {
    std::cout << "name-score pairs: " << std::endl;
    for (int i = 0; i < names.size(); ++i) {
        std::cout << names[i] << " - " << scores[i] << std::endl; 
    }
}

int main() {
    std::vector<std::string> names = {};
    std::vector<int> scores = {};
    std::string name;
    int score;

    std::cout << "Please enter name-score pairs, and NoName 0 to end: " << std::endl;
    while (std::cin >> name >> score) {
        if (name == "NoName" && score == 0) {
            break;
        }
        if (name_in_vector(names, name)) {
            std::cout << "Name: " << name << " already in the vector " << std::endl;
            break;
        }
        names.push_back(name);
        scores.push_back(score);
    }

    print_name_score_pairs(names, scores);

    return 0;
}