// newYear.cpp

#include <iostream>
using namespace std;

void solve(int *arr, int n) {
	int bribe = 0;

	for (int i = n; i >= 2; i--) { //0

		if (arr[i - 1] != i) { // 1=1
			if (arr[i - 2 - 1] == i) {

				swap(arr[i - 2 - 1], arr[i - 1 - 1]);
				swap(arr[i - 1 - 1], arr[i - 1]);
				bribe += 2;

			} else if (arr[i - 1 - 1] == i) {

				swap(arr[i - 1 - 1], arr[i - 1]);
				bribe += 1;

			} else {
				cout << "Too chaotic" << endl;
				return;
			}
		}
	}

	cout << bribe << endl;
}

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		solve(arr, n);
	}


}