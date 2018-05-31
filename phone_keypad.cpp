//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
// Phone Keypad problem in c++(asked in Amazon)
#include <iostream>
#include <conio.h>
using namespace std;
char keypad[][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void PhoneKeypad(char *in,int i,char *out,int j){
	//Base Case
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	//Recursive case ... what is recursive? tricky part
	char ch=in[i];
	int digit=ch-'0';
	if(digit==1||digit==0){
		PhoneKeypad(in,i+1,out,j);
		return ;
	}
	for (int k=0;keypad[digit][k]!='\0'; k++)
	{
		out[j]=keypad[digit][k];
		PhoneKeypad(in,i+1,out,j+1);
		/* code */
	}
}

int main(){

	char in[100];
	cin>>in;
	char out[100];
	PhoneKeypad(in,0,out,0);
//Your code comes here.
	getch();
	return 0;
}