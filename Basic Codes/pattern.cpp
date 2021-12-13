// Pattern.cpp

#include <iostream>

using namespace std;


int main() {

	int n;
	cin >> n;

	for (int row = 1; row <= n; row++) {

		// print white space

		for (int i = 1; i <= (n - row); i++) {
			cout << " ";
		}

		//print incrementing numbers

		int no = row;

		for (int i = 1; i <= row; i++) {
			cout << no;
			no++;
		}

		// print decrementing numbers
		no -= 2;

		for (int i = 1; i <= row - 1; i++) {
			cout << no;
			no--;
		}
		cout << endl;

	}
}