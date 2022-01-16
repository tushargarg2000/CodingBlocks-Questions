// 2Dchar.cpp
#include<iostream>

using namespace std;

int main() {

	// int row;
	// cin >> row;

	// char arr[1000][1000];  //10^6;
	// // char arr[10000000];
	// for (int i = 0; i < row; i++) {
	// 	cin >> arr[i];
	// }
	// for (int i = 0; i < row; i++) {
	// 	cout << arr[i] << endl;
	// }

	// char arr[100];
	// arr[0] = cin.get();
	// cout << arr[0];

	// for (int i = 0; i < 10; i++) {
	// 	arr[i] = cin.get();
	// }

	// cout << arr;

	char arr[100][100];

	int n;
	cin >> n;

	cin.ignore();

	for (int i = 0; i < n; i++) {
		cin.getline(arr[i], 100);
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}


}
