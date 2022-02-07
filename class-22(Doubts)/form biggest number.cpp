#include<bits/stdc++.h>
using namespace std;

bool comparator(string first,string second)
{
    string one = first+second;
    string two = second+first;

	if(one.compare(two)>0)
		return true;
	else
		return false;
}

int main() {
	//code
	int tc;
	cin>>tc;
	while(tc--)
	{
	   int len;
	   vector<string> arr;
	   
	   //Take Array inputs
	   int i;
	   string temp;
	   int no;
	   cin>>len;
	   for(i=0;i<len;++i)
	   {
	       cin>>no;
		   string temp = to_string(no);
	       arr.push_back(temp);
	   }
	   
	   sort(arr.begin(),arr.end(),comparator);
	    
	   for(i=0;i<len;++i)
	       cout<<arr[i];
	  
	}
	return 0;
}