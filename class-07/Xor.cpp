// Xor.cpp

#include <iostream>

using namespace std;


int main() {

	int n;
	cin >> n;

	int ans = 0;

	for (int i = 1; i <= n; i++) {
		int no;
		cin >> no;

		ans ^= no;

	}
	cout << ans;

}