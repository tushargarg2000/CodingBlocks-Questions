// switch.cpp

#include<bits/stdc++.h>

using namespace std;

int main()
{

	char ch;

	cin >> ch;

	switch (ch) {
	case 'n':
	case 'N':
		cout << "North" << endl;
		break;
	case 'e':
	case 'E':
		cout << "East" << endl;
		break;
	default :
		cout << "Invalid input";
	}

	int a = 5, i = 0;

	// if(a==5){
	// 	i++;
	// }else{
	// 	i--;
	// }

	// int b;

	int b = (a == 5 ? i + 1 : i - 1);   // (condition) ? (if true) : (if false);

	cout << b << " " << i;

	return 0;
}