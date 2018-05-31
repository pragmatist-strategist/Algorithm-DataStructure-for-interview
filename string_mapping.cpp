//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
using namespace std;

void findStrings(char *in, int i,char *out, int j){
	// base Case
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	// Recursive case
	// Take one character at a time.
	int digit=in[i]-'0';
	out[j]=digit+'A'-1;
	findStrings(in,i+1,out,j+1);
	// Take 2 characters at a time.
	if (in[i+1]!='\0')
	{
		/* code */
		int secondDigit=in[i+1]-'0';
		int no=10*digit+secondDigit;
		if(no<=26){
			out[j]=no+64;
			findStrings(in,i+2,out,j+1);
		}
	}
}

int main(){

	char in[100];
	char out[100];
	cin>>in;
	findStrings(in,0,out,0);
//Your code comes here.
	getch();
	return 0;
}