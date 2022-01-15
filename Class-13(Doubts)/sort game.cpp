#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool mysort(pair<string,int> a,pair<string,int> b){

	if(a.second==b.second)
		return a.first<b.first;
	else
		return a.second>b.second;
}
int main() {
	int no,n,i,j;
	vector<pair<string,int> >vec;
	cin>>no;
	cin>>n;
	for(i=1;i<=n;i++){
		string str;
		cin>>str;
		int a;
		cin>>a;
		if(a>=no){
			vec.push_back({str,a});
		}
	}
	sort(vec.begin(),vec.end(),mysort);
	for(i=0;i<vec.size();i++){
		cout<<vec[i].first<<" "<<vec[i].second<<endl;
	}
	return 0;
}