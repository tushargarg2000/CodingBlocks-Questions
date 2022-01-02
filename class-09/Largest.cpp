// Largest.cpp
#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];


	int ans = INT_MIN;

	for (int i = 0; i < n; i++) {
		ans = max(arr[i], ans);
	}
	cout << ans;
}