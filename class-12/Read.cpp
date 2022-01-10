// Read.cpp

#include <iostream>

using namespace std;


int main() {

// 2
// chirag
	int a;
	cin >> a;

	char arr[100];

	// cin>>a;
	// cin.ignore();
	cin.get();
	cin.getline(arr, 100);

	cout << a << endl << arr << endl;
}

