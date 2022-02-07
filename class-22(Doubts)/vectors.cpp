#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool mysort(int a,int b){ //This is sorting it in a decreasing manner

    return a>b;
}
int main()
{
    
    //Declaration
    vector<int> vec;

    for(int i=1;i<=5;i++)
        vec.push_back(i);


    cout<<"size is "<<vec.size()<<endl;
    cout<<"capacity is "<<vec.capacity()<<endl;


    sort(vec.begin(),vec.end(),mysort);
    //Sorting it

    //Printing the vector
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    
    //Another way to print the vector
    for(auto i:vec)
        cout<<i<<" ";
    
    
}