// DMA.cpp
#include <iostream>
using namespace std;

int main() {

	// int n;
	// cin >> n;
	// int *arr = new int[n];

	// for (int i = 0; i < n; i++) {
	// 	arr[i] = i + 1;
	// }
	// for (int i = 0; i < n; i++)
	// {
	// 	cout << arr[i] << " ";
	// }
	// cout << endl;
	// delete[] arr;
	// arr = NULL;
	// for (int i = 0; i < n; i++)
	// {
	// 	cout << arr[i] << " ";
	// }
	// int *a = new int;
	// *a = 10;
	// delete a;
	// a = NULL;
	// cout << *a;

	int *arr = new int [100];
	int *temp = arr;
	for (int i = 0; i < 100; i++)arr[i] = i;
	arr = arr + 1;
	delete[] arr;
	arr = NULL;

	// cout << temp ;
}












