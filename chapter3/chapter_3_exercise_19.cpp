// Chapter 3 Exercise 19 - Name-Score Pairs using vectors and then
// lookup score in list
#include <iostream>
#include <string>
#include <vector>

int find_name_in_vector(std::vector<std::string> names, std::string name) {
    for (int i = 0; i < names.size(); ++i) {
        if (names[i] == name) {
            return i;
        }
    }

    return -1;
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
        if (find_name_in_vector(names, name) >= 0) {
            std::cout << "Name: " << name << " already in the vector " << std::endl;
            break;
        }
        names.push_back(name);
        scores.push_back(score);
    }

    std::cout << "Please enter a name to lookup: ";
    while (std::cin >> name) {
        int pos = find_name_in_vector(names, name);
        if (pos == -1) {
            std::cout << name << " not found" << std::endl;
        } else {
            std::cout << name << " - " << scores[pos] << std::endl;
        }
    }
    

    return 0;
}