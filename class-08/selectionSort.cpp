// selectionSort.cpp

#include<iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}


	for (int j = 0; j < n - 1; j++) {
		int min = j;
		for (int i = j + 1; i < n; i++) {

			if (arr[min] > arr[i]) {
				min = i;
			}
		}

		swap(arr[j], arr[min]);
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}