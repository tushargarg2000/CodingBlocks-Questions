// mergeSort.cpp
#include<iostream>

using namespace std;

void merge(int *a, int *b, int*c, int s, int e) {
	int mid = (s + e) / 2;

	int i = s, j = mid + 1, k = s;

	while (i <= mid && j <= e) {
		if (b[i] < c[j])
			a[k++] = b[i++];
		else a[k++] = c[j++];
	}

	while (i <= mid)a[k++] = b[i++];

	while (j <= e)a[k++] = c[j++];
}

void mergeSort(int a[], int s, int e) {
	//base case
	if (s >= e) {
		return;
	}
	//recursion

	//divide in two arrays
	int mid = (s + e) / 2;
	int b[100], c[100];
	for (int i = s; i <= mid; i++) {
		b[i] = a[i];
	}
	for (int i = mid + 1; i <= e; i++) {
		c[i] = a[i];
	}

	mergeSort(b, s, mid);
	mergeSort(c, mid + 1, e);

	merge(a, b, c, s, e);
}

int main() {
	// int b[100] = {1, 2, 3}, c[100] = {1, 2, 3, 9};
	int a[100] = {5, 4, 3, 2, 1};
	int n = 5;

	// merge(a, b, c, 3, 4);
	mergeSort(a, 0, n - 1);

	for (int i = 0; i < 5; i++) {
		cout << a[i] << " ";
	}
}







