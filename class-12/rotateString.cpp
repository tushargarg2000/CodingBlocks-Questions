// rotateString.cpp

#include <iostream>

using namespace std;


int length(char *arr) {

	int i;

	for (i = 0; arr[i] != '\0'; i++) {
		// cout << i << " ";
	}
	return i;
}

//codingcoding
int main() {

	char arr[100] = "coding";

	int rotate = 3;

	int len = length(arr);

	for (int i = len; i >= 0; i--) {
		arr[i + rotate] = arr[i];
	}

	int j = len;

	for (int i = 0; i < rotate; i++) {
		arr[i] = arr[j++];
	}

	arr[len] = '\0';

	cout << arr << endl;
}

