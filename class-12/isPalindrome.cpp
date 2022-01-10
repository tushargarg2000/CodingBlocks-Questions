// isPalindrome.cpp

#include <iostream>

using namespace std;


int length(char *arr) {

	int i;

	for (i = 0; arr[i] != '\0'; i++) {
		// cout << i << " ";
	}
	return i;
}

bool isPal(char *arr) {

	int i = 0, j = length(arr) - 1;

	while (i < j) {
		if (arr[i++] != arr[j--])
			return false;
	}
	return true;
}

int main() {

	char arr[] = "RACECAR";

	if (isPal(arr)) {
		cout << "hurray this is a PAL" << endl;
	}
	else {
		cout << "OHH nOO!! " << endl;
	}
}

