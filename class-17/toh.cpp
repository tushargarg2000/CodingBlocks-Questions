// toh.cpp
#include <iostream>
using namespace std;

void toh(int n, char src, char helper, char dest) {
	if (n == 0) {
		return;
	}

	//move n-1 plates from src to helper with the help of dest
	toh(n - 1, src, dest, helper);
	//moving 1 plate from src to dest
	cout << "moving " << n << " from " << src << " to " << dest << endl;
	// move n-1 plates from helper to dest with the help of src
	toh(n - 1, helper, src, dest);
}

int main() {
	toh(4, 'A', 'B', 'C');
}