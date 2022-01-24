// NStair.cpp
#include <iostream>

using namespace std;

int ways(int n) {
	if (n == 0)
		return 1;
	if (n < 0)
		return 0;
	return ways(n - 1) + ways(n - 2) + ways(n - 3);
}
int Nways(int n, int k) {
	//base case
	if (n == 0)
		return 1;
	if (n < 0)
		return 0;
	//recursive case
	int ans = 0;
	for (int i = 1; i <= k; i++) {
		ans += Nways(n - i, k);
	}
	return ans;
}
int main() {

	cout << Nways(4, 3);

}