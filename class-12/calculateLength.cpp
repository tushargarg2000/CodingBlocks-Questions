// calculateLength.cpp

#include <iostream>

using namespace std;


int length(char *arr) {

	int i;

	for (i = 0; arr[i] != '\0'; i++) {
		// cout << i << " ";
	}
	return i;
}

int main() {

	char arr[100];

	cin.getline(arr, 100);

	int len = length(arr);
	cout << len << endl;
}

