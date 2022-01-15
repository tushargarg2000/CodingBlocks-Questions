#include<iostream>
using namespace std;
#define M 10000003

bool canpaint(int arr[],int n,int painter,long barrier)
{
	int count=1;
	long time=0;
	for(int i=0;i<n;i++)
	{
		//if(arr[i]>barrier)
		//    return false;

		time = (time + arr[i]);

		if(time>barrier)
		{
            count++;
			time=arr[i];
		}
	}


	if(count<=painter)
	    return true;

	return false;
}

int painter_prob(int arr[],int n,int painters,int indi_time)
{
	int s=0,e=0;
	
	for(int i=0;i<n;i++)
	{
		s = max(s,arr[i]);
		e+=arr[i];
	}
	long min_time;

	while(s<=e)
	{
		int mid=s+(e-s)/2;

		//long mid = (s+e)/2;
		if(canpaint(arr,n,painters,mid))
		{
			min_time=mid;
			e=mid-1;
		}
		else
			s=mid+1;
	}
	int x=(min_time*indi_time)%M;
	return x;
}
int main() {

	int n,painters,indi_time;
	cin>>n>>painters>>indi_time;

    int arr[100005];

	for(int i=0;i<n;i++)
	cin>>arr[i];

	cout<<painter_prob(arr,n,painters,indi_time);

	return 0;
}

