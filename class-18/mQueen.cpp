// mQueen.cpp
#include <iostream>
using namespace std;

bool isPossible(int board[][10], int i, int j, int n) {

	for (int k = 0; k < n; k++) {
		if (board[k][j] == 1 || board[i][k] == 1) {
			return false;
		}
	}

	// check right diagonal
	int x = i, y = j;

	while (i >= 0 && j < n) {
		if (board[i][j] == 1)
			return false;
		i--;
		j++;
	}
	i = x, j = y;

	// check left diagonal
	while (i >= 0 && j >= 0) {
		if (board[i][j] == 1)
			return false;
		i--;
		j--;
	}

	return true;
}

bool nQueen(int board[][10], int i, int n) {
	// base case

	if (i == n) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				cout << board[j][k] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}
	//recursive case

	for (int j = 0; j < n; j++) {
		if (isPossible(board, i, j, n)) {
			board[i][j] = 1;
			bool kyaBakipossibleHai = nQueen(board, i + 1, n);
			if (kyaBakipossibleHai) {
				return true;
			}
			board[i][j] = 0;
		}
	}
	return false;
}

int main() {
	int board[10][10] = {0};
	int n = 5;
	nQueen(board, 0, n);
}