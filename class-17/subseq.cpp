// subseq.cpp
#include <iostream>
using namespace std;

void subseq(char *inp, char *out, int i, int j) {
	// base case
	if (inp[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	//recursive case
	// 1) excluding char
	subseq(inp, out, i + 1, j);

	//2) include char
	out[j] = inp[i];
	subseq(inp, out, i + 1, j + 1);
}

int main() {
	char inp[100] = "ABC";
	char out[100];
	subseq(inp, out, 0, 0);

}