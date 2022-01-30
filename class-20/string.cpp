// string.cpp
#include <iostream>

using namespace std;

int main() {
	string s("hello world"); //1st method
	string s1 = "hello world1";
	s = s1;
	string x = "hello";
	string x1 = "hello1";

	// int ans = x.compare(x1);

	// if (ans > 0) {
	// 	cout << "X is greater";
	// } else if (ans == 0) {
	// 	cout << "X and x1 are same";
	// } else {
	// 	cout << "x1 is greater";
	// }
	string a[5];  // 2D string

	// for(int i=0;i<n;i++){
	// 	cin>>a[i];
	// }

	// x.push_back('d');
	// x.push_back('e');
	// x.pop_back();
	// x.clear();
	// cout << x.substr(1, 1);
	// x += "world";  // x=x+"world";
	// x = "world" + x;

	x.erase(0, 1);
	cout << x;



}
