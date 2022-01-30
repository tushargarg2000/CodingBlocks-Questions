// staircase.cpp
#include<iostream>

using namespace std;

void staircase(int arr[][5], int n, int m, int key) {

	int i = 0, j = m - 1;
	while (i < n && j >= 0) {

		if (arr[i][j] == key)
		{
			cout << "Position of key is " << i << " " << j;
			return;
		}

		if (arr[i][j] < key)
			i++;
		else
			j--;
	}

	cout << "key not found";
	return;
}

int main() {

	int arr[][5] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};
	int key = 200;
	staircase(arr, 4, 4, key);

}