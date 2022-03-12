// perfectSquares.cpp
#include<iostream>

using namespace std;

int memo[100] = {};

int solve(int n) {
	// base case
	if (n < 0)return 1e8;

	if (n <= 3)
		return n;
	if (memo[n] != -1)
		return memo[n];
	int ans = 1e8;
	for (int i = 1; i * i <= n; i++) {
		ans = min(ans, solve(n - i * i) + 1);
	}
	return memo[n] = ans;

}
int bottumIp(int n) {
	int dp[1000] = {};
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;

	for (int i = 4; i <= n; i++)
		dp[i] = 1e8;

	for (int i = 4; i <= n; i++) {
		for (int j = 1; j * j <= i; j++) {
			dp[i] = min(dp[i], 1 + dp[i - j * j]); // min(max,4); min(3,1)
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << dp[i] << " ";
	}
	return dp[n];
}
int main() {

	int n = 12;
	for (int i = 0; i <= n; i++) {
		memo[i] = -1;
	}

	cout << bottumIp(n);
}