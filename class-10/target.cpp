// target.cpp

#include <iostream>

using namespace std;

int main() {
	int arr[] = {1, 2, 4, 5, 1000};
	int n = 5;
	int target = 2000;

	if (arr[n - 1] < target) {
		cout << n << endl;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] >= target) {
			cout << i << endl;
			break;
		}
		// else if (arr[i] > target) {
		// 	cout << i << endl;
		// 	break;
		// }
	}
	// if(arr[n-1]<target){
	// 	cout<<n<<endl;
	// }
	return 0;
}