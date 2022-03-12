// wine.cpp
#include<iostream>

using namespace std;

int memo[100][100] = {};

int wineProb(int *cost, int i, int j, int day) {
	//base case
	if (i > j)
		return 0;
	if (memo[i][j] != -1)
		return memo[i][j];
	// recursive case
	int op1 = cost[i] * day + wineProb(cost, i + 1, j, day + 1);
	int op2 = cost[j] * day + wineProb(cost, i, j - 1, day + 1);

	return memo[i][j] = max(op1, op2);
}

int bottumUpWine(int *cost, int n) {
	int dp[100][100] = {};
	for (int i = 0; i < n; i++) {
		dp[i][i] = cost[i] * n;
	}

	for (int i = n - 2; i >= 0; i--) {
		for (int j = 0; j < n; j++) {
			if (i < j) {
				int day = n - (j - i);
				int op1 = cost[i] * day + dp[i + 1][j];
				int op2 = cost[j] * day + dp[i][j - 1];
				dp[i][j] = max(op1, op2);
			}
		}
	}
	return dp[0][n - 1];
}

int main() {

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			memo[i][j] = -1;
		}
	}
	// memset(memo,-1,sizeof memo);
	cout << bottumUpWine(arr, n);
	cout << endl;
	cout << wineProb(arr, 0, n - 1, 1);

}