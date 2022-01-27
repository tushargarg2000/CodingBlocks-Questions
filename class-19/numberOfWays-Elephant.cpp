
#include<bits/stdc++.h>
using namespace std;


int noOfWays(int i,int j){

	//Base case
	if(i==0&&j==0)
		return 1;

	//Out of boundary case
	if(i<0 || j<0)
		return 0;


	for(int k=0;k<i;k++){
		ans = ans + noOfWays(i-k-1,j);
	}
	for(int k=0;k<j;k++)
		ans = ans + noOfWays(i,j-k-1);
	return ans;
}


int main(){
		
	int n,m;
	cin>>n>>m;
	cout<<noOfWays(n,m);

}