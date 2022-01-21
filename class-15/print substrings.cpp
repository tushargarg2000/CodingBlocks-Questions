#include <iostream>
using namespace std;

int main() {
	// your code goes her

    //We are printing the substrings....
    
    char s1[5] = "abcd";
    
    int start,end;
    
    for(start = 0;start<4;start++){
        
        for(end=start;end<4;end++){
            
            //innermost loop will actually print the substring....
            for(int index = start;index<=end;index++){
                cout<<s1[index];
            }
            cout<<endl;
        }
        
    }
    
}
