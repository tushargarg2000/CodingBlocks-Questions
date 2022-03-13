// chessElephant.cpp
#include <iostream>
using namespace std;

int memo[100][100];

int solve(int i, int j) {
	if (i == 0 && j == 0) {
		return 1;
	}

	int ans = 0;
	if (memo[i][j] != -1)
		return memo[i][j];

	for (int k = 0; k <= i - 1; k++) {
		ans += solve(k, j);
	}
	for (int k = 0; k <= j - 1; k++) {
		ans += solve(i, k);
	}
	return memo[i][j] = ans;
}

int solveBottumUp(int n, int m) {
	int dp[100][100] = {};

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (j == 0 && i == 0) {
				dp[i][j] = 1;
			} else {
				int ans = 0;
				for (int k = 0; k <= i - 1; k++)
					ans += dp[k][j];
				for (int k = 0; k <= j - 1; k++)
					ans += dp[i][k];
				dp[i][j] = ans;
			}
		}
	}

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	return dp[n][m];
}

int main() {

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			memo[i][j] = -1;
		}
	}
	cout << solveBottumUp(3, 3);
}