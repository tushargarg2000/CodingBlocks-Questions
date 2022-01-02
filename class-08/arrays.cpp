#include<iostream>

using namespace std;

int main()
{
	int n = 5;
	int arr[n] = {};

	// cout<<&arr[0];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}
	// cout<< arr[0] <<arr[1];

	return 0;
}
