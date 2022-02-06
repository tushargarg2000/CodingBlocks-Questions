// genericVector.cpp
#include<iostream>
#include "vector.h"

using namespace std;



int main() {

	Vector<char> v;

	// v.push_back(1);
	// v.push_back(1);
	// v.push_back(1);
	// v.push_back(1);
	// v.push_back(1);
	v.push_back('A');
	v.push_back('A');
	v.push_back('A');
	v.push_back('A');

	v.pop_back();
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	cout << endl << "Size: " << v.size() << endl;
	cout << "capacity: " << v.capacity() << endl;

}







