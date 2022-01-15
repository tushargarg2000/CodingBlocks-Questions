#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

	ll n,m,x,y;
	cin>>n>>m>>x>>y;

	if(m/x>=n){
		cout<<n<<endl;
		return 0;
	}
	
	//ie. we are having n students.....now we need to do this and that.

	ll remStudents = n - m/x;
	ll remCoupons = m%x; 

	ll ans = m/x;
	while(remStudents>1){

		remCoupons = remCoupons + y; //Taking 1 student down..
		
		if(remCoupons>=x){

			long noOfStudents = remCoupons/x;

			if(noOfStudents<=remStudents){

				ans = ans + noOfStudents;
				remStudents = remStudents - noOfStudents;
				remCoupons = remCoupons%x;
			}else{
				ans = ans + remStudents-1;
				break;
			}
		}
		remStudents--;
	}
	
	cout<<ans<<endl;
	
	return 0;
}