// Chapter 3 Exercise 11 - Rock, Paper, Scissors
#include <iostream>
#include <vector>

void print_prompt(int computer_score, int user_score, int current_move) {
    std::cout << "Current Move Count: " << current_move << ", Computer: " 
              << computer_score << " User: " << user_score << std::endl;
    std::cout << "Play your next move [r, p, s] or 'q' to end: ";
}

int main() {
    std::vector<char> computer_moves = {'r', 'p', 's', 's', 's', 'p', 'p', 'r', 'p', 's', 's', 'r', 'p'};
    int computer_score = 0;
    int user_score = 0;
    int current_move = 0;
    char user_move;

    print_prompt(computer_score, user_score, current_move);
    std::cin >> user_move;
    while (user_move != 'q') {
        char computer_move = computer_moves[current_move % computer_moves.size()];
        std::cout << "Computer Played: " << computer_move << std::endl;        
        switch (user_move) {
            case 'r':
                if (computer_move == user_move) {
                    std::cout << "Tie!" << std::endl;
                } else if (computer_move == 's') {
                    ++user_score;
                    std::cout << "You win" << std::endl;;
                } else {
                    ++computer_score;
                    std::cout << "I win" << std::endl;
                }
                break;
            case 'p':
                if (computer_move == 'p') {
                   std::cout << "Tie!" << std::endl; 
                } else if (computer_move == 'r') {
                    ++user_score;
                    std::cout << "I win" << std::endl;
                } else {
                    ++computer_score;
                    std::cout << "You win" << std::endl;
                }
                break;
            case 's':
                if (computer_move == 's') {
                    std::cout << "Tie!" << std::endl;
                } else if (computer_move == 'r') {
                    ++computer_score;
                    std::cout << "You win" << std::endl; 
                } else {
                    ++user_score;
                    std::cout << "I win" << std::endl;
                }
                break;
        }
        print_prompt(computer_score, user_score, current_move);
        current_move++;
        std::cin >> user_move;
    }
    
    return 0;
}