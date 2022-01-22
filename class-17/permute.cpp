// permute.cpp
#include <iostream>
using namespace std;

void permute(char*inp , int i) {
	//base case
	if (inp[i] == '\0') {
		cout << inp << endl;
		return;
	}
	//recursive call
	for (int j = i; inp[j] != '\0'; j++) {
		swap(inp[i], inp[j]);
		permute(inp, i + 1);
		swap(inp[i], inp[j]); //backtracking
	}
}

int main() {
	char inp[100] = "ABC";
	permute(inp, 0);

}