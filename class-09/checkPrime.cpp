// checkPrime.cpp
#include <iostream>

using namespace std;

// bool check_prime(int);

bool check_prime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0; //false
		}
	}
	return 1; //true
}

void print_all_prime(int n) {

	for (int i = 2; i <= n; i++) {
		if (check_prime(i)) {
			cout << i << " ";
		}
	}
	return;
}

int main() {
	int n;
	cin >> n;

	print_all_prime(n);

	return 0;
}

