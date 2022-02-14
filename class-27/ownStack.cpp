// ownStack.cpp
#include <iostream>
#include <vector>

using namespace std;

class stack {
private:
	vector<int>arr;

public:
	void push(int d) {
		arr.push_back(d);
	}

	void pop() {
		arr.pop_back();
	}

	bool empty() {
		// arr.empty();
		return arr.size() == 0 ? 1 : 0;
	}

	int top() {
		return arr[arr.size() - 1];
		// return arr.back();
	}
};

int main() {

	stack st;

	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);

	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
}
