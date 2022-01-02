// passby.cpp
#include<iostream>

using namespace std;

int updateByValue(int a) {
	// cout << a << " ";
	a++;
	return a;
}

void updateByRef(int &a) {
	a++;
}

int main() {

	int a = 1;

	cout << a << endl;

	updateByValue(a);
	// updateByRef(a);

	cout << a << endl;
}