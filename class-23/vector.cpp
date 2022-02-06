// vector.cpp
#include<iostream>

using namespace std;

class Vector {
	int *arr;
	int cs;
	int ms;

public:

	Vector(int s = 2) {
		cs = 0;
		ms = s;

		arr = new int[ms];
	}

	void push_back(int element) {

		if (cs == ms) {  // is my vector full
			int *temp = arr; //storing old memory
			ms *= 2;

			arr = new int[ms];

			for (int i = 0; i < cs; i++) {
				arr[i] = temp[i]; //copy
			}

			delete[] temp;
		}

		arr[cs] = element;
		cs++;
	}

	void pop_back() {
		if (cs > 0)
			cs--;
	}

	int size() {
		return cs;
	}

	int capacity() {
		return ms;
	}

	// [i]
	int operator[](int i) {
		return arr[i];
	}

};

int main() {

	Vector v;

	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.pop_back();
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	cout << endl << "Size: " << v.size() << endl;
	cout << "capacity: " << v.capacity() << endl;

}




