//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;
void printChars(char *s, int no){
	int j=0;
	for(;no>0;no=no>>1){
		int last_bit = (no&1);
		if(last_bit==1){
			cout<<s[j];
		}
		j++;
	}
	cout<<endl;
}

void subsetGen(char *s){
	int n=strlen(s);
	for (int i = 0; i < (1<<n); i++){
		printChars(s,i);
		/* code */
	}
}

int main(){

	char s[100];
	cin>>s;
	subsetGen(s);
//Your code comes here.
	getch();
	return 0;
}