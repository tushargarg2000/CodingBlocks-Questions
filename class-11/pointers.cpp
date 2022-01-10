// pointers.cpp

#include<iostream>

using namespace std;

// void update(int *a) {
// 	*a = *a + 1;
// }

void print(int *arr) {
	// cout << arr[0] << endl;
	cout << *arr << endl;  //10
}

int main() {

	// int a = 10;

	// update(&a);
	// cout << a;

	int arr[] = {1, 10, 3, 4, 5};
	// int a = 13;
	print(arr + 1);


	// cout << *(arr );

	// for (int i = 0; i < 5; i++) {
	// 	cout << *(arr + i) << " ";

	// }
	// cout << endl;
	// for (int i = 0; i < 5; i++) {
	// 	cout << arr[i] << " ";

	// }
	// int a = 10;
	// int *aptr = &a;
	// long b = 10;
	// long *bptr = &b;

	// char x = 'a';
	// char * xptr = &x;

	// bool f = true;
	// bool *fptr = &f;
	// float
	// cout << &a;
	// cout << fptr;
	// int * aptr;
	// cout << aptr << endl;

	// cout<<aptr

	// cout << a << endl;
	// cout << &a << endl;
	// cout << aptr << endl;

	// cout << b << endl;
	// cout << &b << endl;
	// cout << bptr << endl;

	// cout << x << endl;
	// cout << (double*)&x << endl;
	// cout << (int*)xptr << endl;
	// cout << sizeof(&a); //address

	// int *a;
	// int *b = NULL;

	// cout << *a << endl;
	// cout << *b;
}