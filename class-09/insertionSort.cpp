// insertionSort.cpp
#include<bits.stdc++.h>

using namespace std;

int main() {

	// int n;
	// cin>>n;
	int n = 5;
	int arr[] = {5, 4, 3, 2, 1};


	for (int i = 1; i < n; i++) {

		int pc = arr[i];
		for (int j = i - 1; j >= 0; j--) {

			if (arr[j] > pc) {
				arr[j + 1] = arr[j];
			} else {
				break;
			}
		}

		arr[j + 1] = pc;
	}


	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

}