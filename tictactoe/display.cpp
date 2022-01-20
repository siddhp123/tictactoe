#include <iostream>

void display_board(char board[3][3]) {
    for (int row{ 0 }; row < 3; ++row) {
        for (int col{ 0 }; col < 3; ++col) {
            std::cout << " ";
            std::cout << board[row][col];
            std::cout << " ";
            if (col < 2) { std::cout << "|"; }
        }

        if (row < 2) {
            std::cout << "\n";
            std::cout << "---+---+---";
            std::cout << "\n";
        }
    }

    std::cout << "\n";
}