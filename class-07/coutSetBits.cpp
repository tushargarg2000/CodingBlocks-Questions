// coutSetBits.cpp
#include <iostream>

using namespace std;

#define ll long long int
#define mp make_pair
#define pb push_back
#define fi first

int main() {

	int n;
	cin >> n;

	int ans = 0;

	while (n > 0) {
		if (n & 1) {
			ans++;
		}

		n >>= 1;
	}
	cout << ans;

}