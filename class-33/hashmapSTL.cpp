// hashmapSTL.cpp
#include<iostream>
#include <unordered_map>

using namespace std;

int main() {

	unordered_map<string, int>h;

	h["mango"] = 10;
	h["apple"] = 11;

	// h.insert({"Pineapple", 20});

	unordered_map<string, int>::iterator it;
	for (it = h.begin(); it != h.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
}