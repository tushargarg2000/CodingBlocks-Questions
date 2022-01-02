// inputStream.cpp

#include <iostream>

using namespace std;
int main() {

	int alphabets = 0, numbers = 0, blank_space = 0, other_char = 0, tab = 0;

	char ch;

	ch = cin.get();

	while (ch != '$') {

		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
			alphabets++;
		} else if (ch == ' ') {
			blank_space++;
		} else if (ch == '\t') {
			tab++;
		} else if (ch <= '9' && ch >= '0') {
			numbers++;
		} else {
			other_char++;
		}
		ch = cin.get();
	}

	cout << "numbers: " << numbers << endl;
	cout << "alphabets: " << alphabets << endl;
	cout << "other_char: " << other_char << endl;
	cout << "blank_space: " << blank_space << endl;
	cout << "tab: " << tab << endl;

}
