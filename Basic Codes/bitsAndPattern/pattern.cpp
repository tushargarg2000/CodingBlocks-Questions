#include <iostream>

using namespace std;


int main() {

	int n;
	cin >> n;

	char ch = 'A';

	for (int row = 1; row <= n; row++) {

		// inc order till n-row +1
		for (int j = 1; j <= n - row + 1; j++) {
			cout << ch;
			ch++;
		}
		// i'll do something

		ch--;

		// print dec. order

		for (int j = 1; j <= n - row + 1; j++) {
			cout << ch;
			ch--;
		}
		cout << endl;

	}


}
