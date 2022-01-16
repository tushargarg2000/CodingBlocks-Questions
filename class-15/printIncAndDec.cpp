// printIncAndDec.cpp
#include <iostream>

using namespace std;

void printDec(int n) {
	// base
	if (n == 0)
		return;
	cout << n << " ";
	printDec(n - 1);
}

void printInc(int n) {
	// base
	if (n == 0)
		return;
	printInc(n - 1);
	cout << n << " ";
}
int main() {
	int n = 5;
	printDec(5);
	cout << endl;
	printInc(5);
}