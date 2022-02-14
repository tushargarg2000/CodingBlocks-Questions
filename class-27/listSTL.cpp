// listSTL.cpp
#include <iostream>
#include <list>

using namespace std;

int main() {
	list<int>l;

	l.push_back(1);
	l.push_back(2);
	l.push_front(3);
	l.push_front(4);

	l.reverse();

	l.pop_back();

	for (auto i : l) {
		cout << i << "-->";
	}

	// for (list<int>::iterator i = l.begin(); i != l.end(); i++) {
	// 	cout << *i << "-->";
	// }
}