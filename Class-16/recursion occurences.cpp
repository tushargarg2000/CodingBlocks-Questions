#include <iostream>
using namespace std;
#include<bits/stdc++.h>

void allOcurrence(int index,int n,int *arr,int value){
    
    //Base condition....
    if(n==0){
        return;
    }
    
    //Split the problem
    //1. index ---current part
    //2. (index+1----n)
    
    //Solve the current part
    
    if(arr[index]==value){
        cout<<index<<" ";
    }
    //Part done by harry
    allOcurrence(index+1,n-1,arr,value);
    
}

int firstOccurence(int index,int n,int *arr,int value){
    
    if(index==n){
        return -1;
    }
    
    //Current problem
    if(arr[index]==value){
        return index;
    }
    
    //Harry
    int ans = firstOccurence(index+1,n,arr,value);
    return ans;
}

int lastOccurence(int index,int n,int *arr,int value){
    
    if(index==n){
        return -1;
    }
    
    //harry
    int ans = lastOccurence(index+1,n,arr,value);
    
    if(ans!=-1){
        return ans;
    }
    //current ki importance
    else if(arr[index]==value){
        return index;
    }else
        return -1;
}

//1234
void print(int n){
    
    if(n==0){
        return;
    }
    
    int digit = n%10;
    
    print(n/10);
    
    cout<<digit;
}


int main() {
	
    
    int arr[6] = {8,7,3,7,1,7};
    
    allOcurrence(0,6,arr,7);
    int ans = firstOccurence(0,6,arr,7);
    cout<<ans<<endl;
    int last = lastOccurence(0,6,arr,7);
    cout<<last<<endl;
    print(1235);
	return 0;
}
