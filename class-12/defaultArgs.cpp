
#include <iostream>

using namespace std;

int add(int, int, int a = 10);

int main() {

	int a = 1, b = 2, c = 0;
	cout << add(a, b);
}

int add(int a, int b, int c) {
	return a + b + c;
}
