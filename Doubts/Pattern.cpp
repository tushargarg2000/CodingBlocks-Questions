// Pattern.cpp
#include <iostream>

using namespace std;

int main() {
	int n = 6;
	// cin >> n;
	int temp = 5;
	for (int i = 0; i < n; i++) {
		temp = n;

		for (int j = 0; j <= 2 * n; j++) {
			if (i >= j) {
				cout << temp-- << " ";
			} else if (2 * n - j <= i) {
				if (2 * n - j == i)temp++;
				cout << temp++ << " ";
			} else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	temp = n;
	for (int i = 0; i <= 2 * n; i++) {
		cout << abs(temp--) << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++) {
		temp = n;

		for (int j = 0; j <= 2 * n; j++) {
			if (n - i > j) {
				cout << temp-- << " ";
			} else if (2 * n - j < n - i) {
				if (2 * n - j == n - i - 1)temp++;
				cout << temp++ << " ";
			} else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}
