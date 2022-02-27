// heaps.cpp
#include <iostream>
#include <queue>

using namespace std;

// class compare {
// public:
// 	bool operator()(int a, int b) {  // functor
// 		return a > b;
// 	}
// };


void print(priority_queue<int, vector<int>, greater<int> >h) {
	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}
	cout << endl;
}

int main() {

	// priority_queue<int>h; //max heap
	// priority_queue<int, vector<int>, greater<int> >h;

	// h.push(1);
	// h.push(12);
	// h.push(7);
	// h.push(3);

	// while (!h.empty()) {
	// 	cout << h.top() << " ";
	// 	h.pop();
	// }

	priority_queue<int, vector<int>, greater<int> >h;  //min heap
	int n, k = 3;
	cin >> n;
	while (n != -11) {

		if (n == -1) {
			print(h);
		} else {
			if (h.size() < k)
				h.push(n);
			else if (h.top() < n) {
				h.pop();
				h.push(n);
			}
		}
		cin >> n;
	}

}