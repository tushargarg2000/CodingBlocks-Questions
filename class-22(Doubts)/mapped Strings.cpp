
#include <bits/stdc++.h>
using namespace std;

vector<string> vec;

void printString(int index,string out,string str){

	int n = str.length();
	//Base condition

	if(index==n){
		cout<<out<<" "<<endl;
		return;
	}



	int number = str[index]-'0'; //to get the number in int

	if(number==0)
		return;
	
		char ch = number + 'A'- 1;
		printString(index+1,out+ch,str);

	if(index<n-1){

		int curr = str[index]-'0';
		int next = str[index+1]-'0';
		
		int no = curr*10 + next;
		if(no<=26){

			char ch1 = no + 'A'-1;

			printString(index+2,out+ch1,str);
		}
	}
	

}
void mappedStrings(string inp, string out)
{
    if (inp.size() == 0)
    {
		vec.push_back(out);
        return;
    }

    int singleDigitNumber = inp[0] - '0';
    char ch = singleDigitNumber + 'A' - 1;
    mappedStrings(inp.substr(1), out + ch);

    if (inp.length() >= 2)
    {
        
        int doubleDigitNumber = (inp[0] - '0') * 10 + (inp[1] - '0');
        if (doubleDigitNumber > 9 && doubleDigitNumber <= 26)
        {
            ch = doubleDigitNumber + 'A' - 1;
            mappedStrings(inp.substr(2), out + ch);
        }
    }
}

int main()
{
    string inp;
    cin >> inp;

    printString(0,"",inp);
	
    return 0;
}
