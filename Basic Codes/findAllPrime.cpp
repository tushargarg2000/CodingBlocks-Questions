// FindAllPrime.cpp

#include <iostream>

using namespace std;


int main() {

	int n;
	cin >> n;

	for (int i = 2; i <= n; i++) {

		bool isPrime = 1;

		for (int j = 2; j < i; j++) {

			if (i % j == 0) {
				isPrime = 0;
			}

		}
		if (isPrime) {
			cout << i << " ";
		}
		// }else{
		// 	cout<< i<<"";
		// }

	}
	return 0;
}