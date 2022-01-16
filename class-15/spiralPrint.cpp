// spiralPrint.cpp
#include<iostream>

using namespace std;

int main() {
	int arr[100][100];

	int val = 1, n = 4, m = 4;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = val++;
		}
	}

	int sr = 0, er = n - 1, sc = 0, ec = m - 1;

	while (sr <= er && sc <= ec) {
		// print sr from sc to ec
		for (int col = sc; col <= ec; col++)
			cout << arr[sr][col] << " ";
		sr++;
		// print ec from sr to er
		for (int row = sr; row <= er; row++)
			cout << arr[row][ec] << " ";
		ec--;
		//print er from ec to sc
		for (int col = ec; col >= sc; col--)
			cout << arr[er][col] << " ";
		er--;
		// print sc from er to sr
		for (int row = er; row >= sr; row--)
			cout << arr[row][sc] << " ";
		sc++;
	}
}