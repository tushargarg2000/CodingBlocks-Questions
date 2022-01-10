// MergeString.cpp

#include <iostream>

using namespace std;

int length(char *arr) {

	int i;

	for (i = 0; arr[i] != '\0'; i++) {
		// cout << i << " ";
	}
	return i;
}

void merge(char *arr1, char* arr2) {

	int i = length(arr1);

	for (int j = 0; arr2[j] != '\0'; j++) {
		arr1[i++] = arr2[j];
	}
	arr1[i] = '\0';
	cout << arr1;
}

int main() {

	char arr1[100] = "chirag";
	char arr2[100] = "kunal";


	merge(arr1, arr2);

}