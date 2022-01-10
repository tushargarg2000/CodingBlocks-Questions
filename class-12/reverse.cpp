// reverse.cpp
#include <iostream>

using namespace std;

void reverse(int *arr, int n) {

	int i = 0, j = n - 1;

	while (i < j) {
		swap(arr[i++], arr[j--]);
	}

}

void print(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return;
}

int main() {

	int n = 5;
	int arr[] = {1, 2, 3, 4, 5};

	reverse(arr, n);

	print(arr, n);
}