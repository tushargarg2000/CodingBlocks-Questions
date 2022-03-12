// MinPathSum.cpp
#include<iostream>

using namespace std;

int memo[100][100] = {};

int solve(int arr[][4], int i, int j) {
// base case
	if (i == 0 && j == 0) {
		return arr[i][j];
	}
	if (i < 0 || j < 0)
		return 1e8;

	if (memo[i][j] != -1)
		return memo[i][j];
// recusive case

	return memo[i][j] = min(solve(arr, i - 1, j), solve(arr, i, j - 1)) + arr[i][j];

}

int bottumupMinPath(int arr[][4], int n, int m) {

	int dp[100][100] = {0};
	dp[0][0] = arr[0][0];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 && j == 0)continue;
			int op1 = i - 1 < 0 ? 1e8 : dp[i - 1][j];
			int op2 = j - 1 < 0  ? 1e8 : dp[i][j - 1];

			dp[i][j] = min(op1, op2) + arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return dp[n - 1][m - 1];

}



int main() {

	int arr[][4] = {
		{1, 10, 20, 30},
		{4, 5, 1, 8},
		{1, 6, 1, 9},
		{2, 1, 1, 1},
		{4, 1, 10, 1}
	};


	cout << bottumupMinPath(arr, 5, 4) << endl;
}