// merge.cpp
#include<iostream>

using namespace std;

void merge(int *a, int *b, int*c, int n, int m) {
	int i = 0, j = 0, k = 0;

	while (i < n && j < m) {
		if (b[i] < c[j])
			a[k++] = b[i++];
		else a[k++] = c[j++];
	}

	while (i < n)a[k++] = b[i++];

	while (j < m)a[k++] = c[j++];
}

int main() {
	int b[100] = {1, 2, 3}, c[100] = {1, 2, 3, 9};
	int a[100];

	merge(a, b, c, 3, 4);
	for (int i = 0; i < 7; i++) {
		cout << a[i] << " ";
	}
}