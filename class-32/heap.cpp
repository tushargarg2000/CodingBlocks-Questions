// heap.cpp
#include <iostream>
#include<vector>

using namespace std;

class minHeap {
	vector<int>arr;

	void heapify(int i) {
		int min = i;
		int left = i * 2;
		int right = i * 2 + 1;

		if (left < arr.size() && arr[min] > arr[left])
			min = left;
		if (right < arr.size() && arr[min] > arr[right])
			min = right;
		if (min != i) {
			swap(arr[min], arr[i]);
			heapify(min);
		}
	}

public:
	minHeap() {
		arr.push_back(-1);
	}

	void push(int d) {
		// insertion

		arr.push_back(d);
		int c = arr.size() - 1;
		int p = c / 2;

		while (p >= 1 && arr[p] > arr[c]) {
			swap(arr[p], arr[c]);
			c = p;
			p /= 2;
		}
	}

	void pop() {

		swap(arr[1], arr[arr.size() - 1]);
		arr.pop_back();
		heapify(1);
	}

	int top() {
		return arr[1];
	}

	bool empty() {
		return arr.size() == 1;
	}
};

int main() {

	minHeap h;

	h.push(1);
	h.push(10);
	h.push(19);
	h.push(8);
	h.push(1000);

	while (!h.empty()) {
		cout << h.top() << " ";
		h.pop();
	}

}











