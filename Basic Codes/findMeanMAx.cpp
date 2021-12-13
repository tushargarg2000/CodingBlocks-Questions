// FindMeanMax.cpp

#include <bits/stdc++.h>

using namespace std;


int main() {

	int n;
	cin >> n;

	int sum = 0, mi = INT_MAX, ma = INT_MIN;

	for (int i = 0; i < n; i++) {

		int no;
		cin >> no;

		// three operations
		// 1. add
		sum += no;

		//2. find min

		if (mi > no) {
			mi = no;
		}

		//3. find max

		if (ma < no) {
			ma = no;
		}
	}

	cout << "mean :" << sum / n << '\n' << "max :" << ma << '\n' << "min :" << mi;

}