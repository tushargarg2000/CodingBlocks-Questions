// 2Dvector.cpp
#include<iostream>
#include<vector>

using namespace std;

int main()
{

	vector<vector<int> >arr;
	int n = 5, m = 5;

	int a = 0;
	for (int i = 0; i < n; i++) {
		vector<int>temp;
		arr.push_back(temp);
		for (int j = 0; j < m; j++) {

			arr[i].push_back(a++);
			// temp.push_back(a++);
		}
		// arr.push_back(temp);
	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}