// stockPrice.cpp

#include <iostream>
using namespace std;

int main() {

	int prices[100000] = {7, 5, 6, 1, 5, 9};
	int n = 6;


	int profit = 0;
	int min_price = 9999999;

	for (int day = 0; day < n; day++) {
		// if (min_price > prices[day]) {
		// 	min_price = prices[day];
		// } else {
		// 	profit = max(profit, prices[day] - min_price);
		// }
		min_price = min(min_price, prices[day]);
		profit = max(profit, prices[day] - min_price);
	}

	cout << profit << endl;
}
