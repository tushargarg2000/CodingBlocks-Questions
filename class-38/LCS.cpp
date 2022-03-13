// LCS.cpp
#include <iostream>

using namespace std;
// recursive

int LCS(string s1, string s2, int i, int j) {
	// base
	if (i == s1.size() || j == s2.size()) {
		return 0;
	}
	// recursive

	if (s1[i] == s2[j]) {
		return 1 + LCS(s1, s2, i + 1, j + 1);
	}
	return max(LCS(s1, s2, i + 1, j), LCS(s1, s2, i, j + 1));
}


// memoization
int memo[100][100];
int LCSTopDown(string s1, string s2, int i, int j) {
	// base
	if (i == s1.size() || j == s2.size()) {
		return memo[i][j] = 0;
	}
	// recursive
	if (memo[i][j] != -1)
		return memo[i][j];

	if (s1[i] == s2[j]) {
		return memo[i][j] = 1 + LCS(s1, s2, i + 1, j + 1);
	}
	return memo[i][j] = max(LCS(s1, s2, i + 1, j), LCS(s1, s2, i, j + 1));
}

int LCSBottomUp(string s1, string s2) {

	int dp[100][100] = {};
	int n = s1.size(), m = s2.size();

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (s1[i - 1] == s2[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			} else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	// for (int i = 0; i <= n; i++) {
	// 	for (int j = 0; j <= m; j++) {
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	int len = dp[n][m];
	int i = n, j = m;
	char* str = new char[len + 1];
	str[len] = '\0';
	len--;

	while (len >= 0) {
		if (s1[i - 1] == s2[j - 1]) {
			str[len] = s1[i - 1];
			i--; j--; len--;
		} else {
			if (dp[i - 1][j] > dp[i][j - 1]) {
				i--;
			} else {
				j--;
			}
		}
	}
	cout << str;
	return dp[n][m];



}
int main() {
	string s1 = "abbcd";
	string s2 = "abc";
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++)
			memo[i][j] = -1;
	}
	cout << LCSBottomUp(s1, s2);


}