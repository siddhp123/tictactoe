#include <iostream>

void turn(bool playerTurn);
int determine_winner(char board[3][3]);
void display_board(char board[3][3]);

int input_coordinate(char axis);
int verify_coordinates(int xCoord, int yCoord);
void add_move_to_board(bool playerTurn);

char board[3][3]{
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

int main()
{
    bool playerTurn{ false };
    bool isWinnerDecided{ false };

    while (isWinnerDecided == false) {
        turn(playerTurn);

        switch (determine_winner(board)) {
        case 0:
            break;
        case 1:
            std::cout << "Player 1 Wins!";
            break;
        case 2:
            std::cout << "Player 2 Wins!";
            break;
        case 3:
            std::cout << "Its a draw!";
            break;
        }

        display_board(board);

        playerTurn = !playerTurn;
    }
}

void turn(bool playerTurn) {
    int coordinates[2]{ 0, 0 };
    bool compValidCoords = false;

    while (compValidCoords = false) {
        int xCoord{ input_coordinate(x) }, yCoord{ input_coordinate(y) };

        if (verify_coordinates(xCoord, yCoord) == 0) {
            compValidCoords = true;
        }
    }

    add_move_to_board(playerTurn);
}

int input_coordinate(char axis) {
    int tempCoord;
    bool validCoordEntered = false;

    while (validCoordEntered == false) {
        std::cout << "Enter " << axis << " coordinate: ";
        std::cin >> tempCoord;

        if (tempCoord >= 1 && tempCoord <= 3) {
            if (axis == x) {
                return(tempCoord - 1);
                validCoordEntered = true;
            }
            else {
                switch (tempCoord) {
                case 1:
                    tempCoord = 3;
                    break;
                case 3:
                    tempCoord = 1;
                    break;
                default:
                    tempCoord = 2;
                    break;
                }
                return(tempCoord - 1);
                validCoordEntered = true;
            }

        }
        else {
            std::cout << "Enter a valid coordinate \n";
        }
    }
}

int verify_coordinates(int xCoord, int yCoord) {
    if (board[xCoord][yCoord] == ' ') {
        coordinates[0] = xCoord;
        coordinates[1] = yCoord;
        return(0);
    }

    else {
        return(1);
    }
}

void add_move_to_board(bool playerTurn) {
    switch (playerTurn)
    {
    case true:
        board[coordinates[0]][coordinates[1]] = 'o';
        return;
    case false:
        board[coordinates[0]][coordinates[1]] = 'x';
        return;
    }
}