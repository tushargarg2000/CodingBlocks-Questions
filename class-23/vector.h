// vector.h

#include<iostream>

template <typename T>
class Vector {
	T *arr;
	int cs;
	int ms;

public:

	Vector(int s = 2) {
		cs = 0;
		ms = s;

		arr = new T[ms];
	}

	void push_back(int element) {

		if (cs == ms) {  // is my vector full
			T *temp = arr; //storing old memory
			ms *= 2;

			arr = new T[ms];

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
	T operator[](int i) {
		return arr[i];
	}

};