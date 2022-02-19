// StackUsing2Queues.cpp
#include <iostream>
#include <queue>
using namespace std;


class stack {
	queue<int>q1;
	queue<int>q2;

public:

	void push(int d) {
		if (!q1.empty())
			q1.push(d);
		else {
			q2.push(d);
		}
	}

	int top() {
		if (!q1.empty()) {

			while (q1.size() > 1) {
				q2.push(q1.front());
				q1.pop();
			}

			int tp = q1.front();
			q1.pop();
			q2.push(tp);
			return tp;

		} else {
			while (q2.size() > 1) {
				q1.push(q2.front());
				q2.pop();
			}

			int tp = q2.front();
			q2.pop();
			q1.push(tp);
			return tp;
		}
	}

	bool empty() {
		if (q1.empty() && q2.empty())
			return 1;
		return 0;
	}

	void pop() {
		if (!q1.empty()) {

			while (q1.size() > 1) {
				q2.push(q1.front());
				q1.pop();
			}
			q1.pop();

		} else {
			while (q2.size() > 1) {
				q1.push(q2.front());
				q2.pop();
			}
			q2.pop();
		}
	}

};


int main() {
	stack st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.pop();

	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
}











