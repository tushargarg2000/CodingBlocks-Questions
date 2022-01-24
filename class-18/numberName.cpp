// numberName.cpp

#include <iostream>

using namespace std;

char names[][6] = {
	"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};

void numberName(int n) {
	if (n == 0)
		return;
	numberName(n / 10);
	int x = n % 10;
	cout << names[x] << " ";
}

int main() {
	// char name[][];
	// if(n==0)cout<<"zero";
	numberName(1003);
}