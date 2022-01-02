#include <iostream>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	// loop till n (rows)

	for (int i = 1; i <= n; i++) {

		//print spaces
		for (int j = 0; j <= (n - i); j++) {
			cout << " ";
		}
		int num = i;
		for (int j = 0; j < i; j++) {
			cout << num;
			num++;
		}
		num -= 2;
		// num = i ;
		for (int j = 0; j < i - 1; j++) {
			cout << num;
			num--;
		}

		cout << endl;
	}
	return 0;
}

