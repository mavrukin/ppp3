// Chapter 3 Exercise 20 - Name-Score Pairs using vectors and then
// lookup names for a given score in list
#include <iostream>
#include <string>
#include <vector>

std::vector<int> find_values_in_vector(std::vector<int> scores, int score) {
    std::vector<int> found_index_scores = {};
    for (int i = 0; i < scores.size(); ++i) {
        if (scores[i] == score) {
            found_index_scores.push_back(i);
        }
    }

    return found_index_scores;
}

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

    std::cout << "Please enter a score to lookup: ";
    while (std::cin >> score) {
        std::vector<int> found_scores = find_values_in_vector(scores, score);
        if (found_scores.size() == 0) {
            std::cout << score << " not found" << std::endl;
        } else {
            for (int pos : found_scores) {
                std::cout << names[pos] << " - " << scores[pos] << std::endl;
            }
        }
    }
    

    return 0;
}