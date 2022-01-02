// reverse.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int j = 0; j < n - 1; j++) { // n-1 => 5-1=> 4 // 4 iterations , 0,1,2,3
		for (int i = 0; i < n - 1; i++) {

			if (arr[i] > arr[i + 1]) {
				// swap(arr[i], arr[i + 1]);
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}



}