// findMissingEle.cpp

#include <iostream>

using namespace std;

int main() {

	int arr[] = {1, 0, 2, 4, 5};
	int n = 5;


	int sum = 0, actualSum = 0;

	// for (int i = 0; i < n; i++) {
	// 	actualSum += arr[i];
	// }

	// sum = (n * (n + 1)) / 2;

	int x = 0;

	for (int ele = 0; ele <= n; ele++) {
		x ^= ele;
	}
	for (int i = 0; i < n; i++) {
		x ^= arr[i];
	}
	cout << x << endl;
	// cout << sum - actualSum << endl;
}