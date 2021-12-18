#include <iostream>
using namespace std;
int main() {
    
    int n;
    cin>>n;

    float inc = 1;

    int current_precision = 0;
    int total_precision = 2;

    float i = 1;

    while(current_precision<=total_precision){
        
        while(1)
        {
            if(i*i>n){
                break;
            }
            else
                i = i+inc;
        }
        i = i-inc;

        current_precision = current_precision + 1;
        inc = inc/10;
    }
    cout<<i<<endl;
    //cout<<"Hello World!";
}
