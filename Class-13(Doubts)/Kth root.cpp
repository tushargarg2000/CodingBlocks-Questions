#include<iostream>
using namespace std;
#include<algorithm>
#include<math.h>
#define ll long long int

bool isvalid(int mid,ll n,int k){

	
	ll val=1;
	for(int i=1;i<=k;i++)
	{
		val*=mid;
	}


	//We have got x^k.....
	if(val>n){
		return false;
	}
	return true;
}

//i have to find an integer x such that x^k is equals to n
void kthroot(ll n,int k)
{
    if(k==1) 
		{
			cout<<n<<endl;
			return;
		}
		//return n; 
    
	int s = 1;
	int e = 1e8;					

	int ans = -1;
	while(s<=e){

		int mid = (s+e)/2;
		
		bool temp = isvalid(mid,n,k);		

		if(temp){
			ans = mid;
			s = mid+1;
		}else
			e = mid-1;
	}
	cout<<ans<<endl;
}
int main() {
    int t;cin>>t;
    while(t--)
    {
        long long int n;cin>>n;
        int k;
		
		cin>>k;
        kthroot(n,k);
		
    }
    return 0;
}