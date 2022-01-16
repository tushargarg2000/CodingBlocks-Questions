// fibonacciRecursion.cpp

#include<iostream>
using namespace std;

int fib(int n) {
	// base

	if (n == 1 || n == 0)
		return n;
	// recursive case

	return fib(n - 1) + fib(n - 2);
}

int main() {
	cout << fib(10);
}