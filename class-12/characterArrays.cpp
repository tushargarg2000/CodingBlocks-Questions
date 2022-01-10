#include <iostream>

using namespace std;

void print(char *arr) {
	for (int i = 0; arr[i] != '\0'; i++) {
		cout << arr[i];
	}
	cout << endl;
}
void characterInput(char *arr, int limit, char delimiter = '\n') {

	int i = 1;


	char x = cin.get();
	arr[0] = x;
	while (x != delimiter && i < limit) {

		x = cin.get();
		arr[i++] = x;
	}

	arr[i - 1] = '\0';

}

int main() {

	// char arr[100] = {'a', '\0', 'c', '\0'};

	char arr[100];
	// arr = cin.get();
	// cin >> arr ;
	int limit = 100;
	characterInput(arr, limit, '$');
	cin.getline(arr, 5, '$');

	print(arr);
	// cout << arr;


	// char arr[100] = "aditya";

	// cout << arr[8];

	// cout << arr;
	// char arr[] = "aditya";
	// cout << arr[6];
	// cout << "hello";
}