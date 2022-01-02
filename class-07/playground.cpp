// playground.cpp
#include<bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	//selection sort

	for (int i = 0; i < n - 1; i++) {
		int min_ = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[min_] > arr[j]) {
				// swap(arr[i],arr[j]);
				min_ = j;
			}
		}

		swap(arr[min_], arr[i]);
	}
	for (int i = 0; i < n; i++)cout << arr[i] << " ";
}
