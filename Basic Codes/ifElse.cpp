// ifElse.cpp

#include <iostream>

using namespace std;

int main() {


#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int marks;  // declare

	cin >> marks; //input -> initialize

	// marks=100. //initialize

	if (marks <= 100 && marks >= 91) {
		cout << "A+";
	} else if (marks < 91 && marks >= 81) {
		cout << "A";
	} else if (marks < 81 && marks >= 71) {
		cout << "B";
	} else {
		cout << "F";
	}

	return 0; //exit code

}