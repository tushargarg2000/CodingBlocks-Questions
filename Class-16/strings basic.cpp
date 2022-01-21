#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	// your code goes here
	
	//every bit k liye count rkhna.....
	
// 	int ans = 0;
// 	for(bit=0;bit<32;bit++){
	    
// 	    int count = 0;
	    
// 	    for(i=0;i<n;i++){
	        
// 	        //
// 	            count++;
	        
// 	    }
	    
// 	    if(count%3==1){
// 	        ans = ans + pow(2,bit);
// 	    }
// 	}

    
    string s1; //int a;
    cin>>s1; //cin>>a;
    
    string s2;
	
	cin>>s2;
	
	cout<<s1+s2<<endl;
	
	int n = s1.length();
	
	//if(a>b){
	
	bool ans = s1>s2;
	
	if(ans){
	    cout<<"wow"<<endl;
	}
	else{
	    cout<<"r"<<endl;
	}
	
	cout<<s1.size()<<endl;
	
	s1[50] = 'q';
	
	//Printing in the array.....
	for(int i=0;i<n;i++){
	    cout<<s1[i]<<" ";
	}
	
	int arr[50];
	
	string number[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	
	for(int i=0;i<10;i++)
	    cout<<number[i]<<" ";
	    
	for(int i=0;i<10;i++){
	    
	    string str = number[i];
	    for(int j=0;j<str.length();j++)
	        cout<<str[j]<<" ";
	    cout<<endl;
	}
	
	
	cout<<number[0][0]<<"-----"<<endl;
	
	
	
	return 0;
}
