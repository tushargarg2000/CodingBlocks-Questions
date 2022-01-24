// ratInAMaze.cpp
#include <iostream>

using namespace std;

bool sol[][10] = {0};

bool ratInAMaze(char maze[][5], int i, int j, int n, int m) {
	if (i == n - 1 && j == m - 1) {
		sol[i][j] = 1;
		for (int k = 0; k < n; k++) {
			for (int l = 0; l < m; l++) {
				cout << sol[k][l] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return false;
	}
	sol[i][j] = 1;
	//right
	if (j + 1 < m && maze[i][j + 1] == 'O') {
		bool kyaBakiJaSktaHuMe = ratInAMaze(maze, i, j + 1, n, m);
		if (kyaBakiJaSktaHuMe)
			return true;
	}

	// down
	if (i + 1 < n && maze[i + 1][j] == 'O') {
		bool kyaBakiJaSktaHuMe = ratInAMaze(maze, i + 1, j, n, m);
		if (kyaBakiJaSktaHuMe) {
			return true;
		}
	}
	sol[i][j] = 0;
	return false;
}

int main() {

	char maze[][5] = {
		"OOOO",
		"OOXX",
		"OOOO",
		"XXOO"
	};
	int n = 4, m = 4;
	ratInAMaze(maze, 0, 0, n, m);
}