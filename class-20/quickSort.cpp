// quickSort.cpp
#include<iostream>

using namespace std;

int pivot(int arr[], int s, int e) {

	int i = s - 1;
	for (int j = s; j <= e - 1; j++) {
		if (arr[j] < arr[e])
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}

	swap(arr[i + 1], arr[e]);
	return i + 1;

}

void quickSort(int arr[], int s, int e) {
	if (s >= e)
		return;
	int p = pivot(arr, s, e);

	quickSort(arr, s, p - 1);
	quickSort(arr, p + 1, e);
}

int main() {

	int arr[] = {5, 4, 3, 2, 1};
	quickSort(arr, 0, 4);

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}

}
