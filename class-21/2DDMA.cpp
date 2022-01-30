// 2DDMA.cpp
#include <iostream>

using namespace std;

int main() {

	// int n;
	// cin>>n;
	// int arr[n];
	// int *arr=new int[n];


	int n, m, number = 0;
	cin >> n >> m;
	int **arr = new int*[n];

	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = number++;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;
	arr = NULL;
}