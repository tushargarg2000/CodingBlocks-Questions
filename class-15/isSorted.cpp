// isSorted.cpp
#include<iostream>
using namespace std;

bool isSorted(int arr[], int n) {
	// base
	if (n == 1 || n == 0) {
		return true;
	}

	// recursive case

	bool isChotaArraySorted = isSorted(arr + 1, n - 1);

	if (isChotaArraySorted && arr[0] <= arr[1])
		return true;
	return false;
}

int main() {

	int arr[] = {1, 2, 100, 5, 6};
	int n = 5;

	if (isSorted(arr, n))
		cout << "YES";
	else
		cout << "NO";
}