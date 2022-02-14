// balancedBrackets.cpp
#include <iostream>
#include <stack>

using namespace std;

int main() {

	string arr = "}";

	stack<char>st;
	bool f = 0;

	for (int i = 0; i < arr.size(); i++) {

		if (arr[i] == '{' || arr[i] == '(' || arr[i] == '[')
			st.push(arr[i]);
		// if (!st.empty()) {
		if (arr[i] == ')') {
			if (!st.empty() && st.top() == '(')
				st.pop();
			else f = 1;
		}
		if (arr[i] == '}') {
			if (st.empty() != 1 && st.top() == '{')
				st.pop();
			else f = 1;
		}
		if (arr[i] == ']') {
			if (!st.empty() && st.top() == '[')
				st.pop();
			else f = 1;
		}
		// }

	}

	if (st.empty() && !f) {
		cout << "Balanced";
	} else {
		cout << "Not balanced";
	}
}
