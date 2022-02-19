// queuesUsingVector.cpp
#include <iostream>
#include <vector>

using namespace std;

class Queue {
private:
	vector<int>arr;
	int curr;
	int size;
	int f;
	int r;
public:
	Queue(int n) {
		arr.resize(n);
		size = n;
		curr = 0;
		f = 0;
		r = n - 1;
	}

	void push(int d) {
		if (curr >= size) {
			cout << "Queue overflow" << endl;
			return;
		}

		r = (r + 1) % size;
		arr[r] = d;
		curr++;
		return;
	}

	void pop() {
		if (curr == 0) {
			cout << "underflow" << endl;
			return;
		}

		f = (f + 1) % size;
		curr--;
	}

	bool empty() {
		if (curr == 0) {
			return 1;
		}
		return 0;
	}

	int front() {
		return arr[f];
	}

};

int main() {

	Queue q(3);
	q.push(1);
	q.push(1);
	// q.push(2);
	q.push(3);
	// q.pop();

	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

}













