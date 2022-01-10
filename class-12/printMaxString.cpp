// printMaxString.cpp
#include <iostream>

using namespace std;


int length(char *arr) {

	int i;

	for (i = 0; arr[i] != '\0'; i++) {
		// cout << i << " ";
	}
	return i;
}

void copy(char *max_string, char* arr) {


	for (int i = 0; arr[i] != '\0'; i++) {
		max_string[i] = arr[i];
	}
}
// a
// ab
// abc
int main() {

	int n;
	cin >> n;

	cin.ignore();

	char max_string[100];
	int max_len = 0;

	for (int i = 0; i < n; i++) {

		char arr[100];
		cin.getline(arr, 100);
		int curr_len = length(arr);

		if (max_len <= curr_len) {
			max_len = curr_len;
			copy(max_string, arr); // storing the max string

		}

	}
	cout << max_string;



}

