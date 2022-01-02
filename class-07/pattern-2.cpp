// pattern - 2.cpp
#include <iostream>

using namespace std;


int main() {

	int n;
	cin >> n;

	for (int row = 1; row <= n; row++) {

		for (int j = 1; j <= row; j++) {
			cout << "*";
		}
		cout << " ";
		for (int j = 1; j <= n - row + 1; j++) {
			cout << "*";
		}
		cout << " ";
		for (int j = 1; j <= n - row + 1; j++) {
			cout << "*";
		}
		cout << " ";
		for (int j = 1; j <= row; j++) {
			cout << "*";
		}

		cout << endl;

	}

}