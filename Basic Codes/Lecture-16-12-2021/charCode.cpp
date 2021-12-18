#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
    
    char c = 'a';
    int val = c;
    cout<<'a'+'a'<<endl;
    
    //To compare the char and check if its upper case or lowercase
    
    if(val>=65 && val<=90)
        cout<<"UPPERCASE"<<endl;
    
    else if(val>=97 && val<=122)
        cout<<"LowerCase"<<endl;
    
    else
        cout<<"Invalid"<<endl;
	// your code goes here
	return 0;
}
