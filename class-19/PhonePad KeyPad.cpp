
#include<bits/stdc++.h>
using namespace std;

string keys[10] = {"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void phoneKeyPad(string str,string output,int index){

	int n = str.length();
	//base case
	if(n==index){
		//if(output==givenString)
		//    return true;
		//
		cout<<output<<endl;
		return;
	}
	int currentKeyPressed = str[index]-'0';

	string currentString = keys[currentKeyPressed];

	for(int i=0;i<currentString.length();i++)
	{
		char ch = currentString[i];

		phoneKeyPad(str,output+ch,index+1);
	}	

}

int main(){
		
	string str;
	cin>>str;
	phoneKeyPad(str,"",0);
}