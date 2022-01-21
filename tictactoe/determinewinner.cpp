#include <iostream>

int determine_winner (int coordinates[2], bool playerTurn, char board [3][3], int turnNumber) {
	char checkFor = (playerTurn) ? 'o' : 'x';

	if (turnNumber == 9) {
		return(3);
	}
	
	for (int i = 0; i < 3; i++) {
		if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) && board[i][0] == checkFor) { 
			std::cout << checkFor << "wins!"; 
			return(static_cast <int> (checkFor));
		}

		if ((board[0][i] == board[1][i] && board[1][i] == board[2][i]) && board[0][i] == checkFor) { 
			std::cout << checkFor << "wins!"; 
			return(static_cast <int> (checkFor));
		}
	}

	if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) && board[0][0] == checkFor) { 
		std::cout << checkFor << "wins!"; 
		return(static_cast <int> (checkFor));
	}

	if ((board[0][2] == board[1][1] && board[1][1] == board[2][0]) && board[0][2] == checkFor) { 
		std::cout << checkFor << "wins!"; 
		return(static_cast <int> (checkFor));
	}

	
}

