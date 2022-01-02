// subArray.cpp

#include<iostream>

using namespace std;

int main() {

	int arr[] = {1, 2, 3};
	int n = 3;

	int k = 3;

	int ans = 0;

	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = i; j < n; j++) {
			sum += arr[j];
			if (sum == k)
				ans++;
		}
	}
	cout << ans << endl;
}
