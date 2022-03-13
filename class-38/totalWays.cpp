// totalWays.cpp
#include <iostream>

using namespace std;

int memo[100][100] = {0};

int totalWays(int i, int j) {
	if (i == 0 && j == 0 )
		return 1;
	if (i < 0 || j < 0)
		return 0;
	if (memo[i][j] != 0)
		return memo[i][j];
	return memo[i][j] = totalWays(i - 1, j) + totalWays(i, j - 1);
}

int bottumupTotalWays(int n, int m) {
	int dp[100][100] = {};

	for (int i = 0; i < n; i++) {
		dp[i][0] = 1;
	}
	for (int i = 0; i < m; i++) {
		dp[0][i] = 1;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			// if (i == 0 || j == 0) {
			// 	dp[i][j] = 1;
			// } else {
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
			// }
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
	// cout << "hello";

	cout << bottumupTotalWays(5, 4);
}