// FToC.cpp

#include<iostream>

using namespace std;

void FToC(int start, int end, int step) {


	for (int i = start; i <= end ; i += step) {
		cout << i << " " << (5 * (i - 32)) / 9 << endl;
	}
	return;
}

int main() {
	int start, end , step;

	cin >> start >> end >> step;


	FToC(start, end, step);
}