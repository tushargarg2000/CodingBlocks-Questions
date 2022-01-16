// sum.cpp
#include<iostream>
using namespace std;

int sum(int arr[], int n) {
	// base
	if (n == 0)
		return 0;
	// recursive case (f(n)=arr[0]+f(arr+1,n-1))

	return arr[0] + sum(arr + 1, n - 1);
}
int sum1(int arr[], int n) {
	// base
	if (n == 0)
		return 0;
	// recursive case (f(n)=arr[0]+f(arr+1,n-1))

	return arr[n - 1] + sum1(arr, n - 1);
}

int sum2(int arr[], int n, int i) {
	// base
	if (n == i)
		return 0;
	// recursive case (f(n)=arr[0]+f(arr+1,n-1))

	return arr[i] + sum2(arr, n , i + 1);
}

int main() {

	int arr[5] = {1, 2, 3, 4, 5};
	int n = 5;
	cout << sum(arr, n) << endl;
	cout << sum1(arr, n) << endl;
	cout << sum2(arr, n, 0) << endl;

}