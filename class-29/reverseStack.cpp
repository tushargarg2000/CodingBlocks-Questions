// reverseStack.cpp
#include <iostream>
#include <stack>
using namespace std;

void appendAtBottom(stack<int>&st, int tp) {
	// base case
	if (st.empty()) {
		st.push(tp);
		return;
	}

	// i'll pop
	int top = st.top();
	st.pop();

	//ask rec to pop for me
	appendAtBottom(st, tp);

	// i'll push
	st.push(top);
}

void solve(stack<int> &st) {
	// base
	if (st.empty()) {

		return;
	}
	// save top

	int tp = st.top();
	st.pop();

	// ask rec to reverse the left over
	solve(st);
	// ill append top at bottom

	appendAtBottom(st, tp);
	// st.push(tp);

}

int main() {

	stack<int>st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	// solve(st);
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
}








