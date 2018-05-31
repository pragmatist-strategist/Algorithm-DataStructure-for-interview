//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
// Count all possible subsets of a given string.
//Hint-> For each letter in a string we have 2 options- take it or throw away.
//So total options are 2^n where n-> No. of letters in string. 

#include <iostream>
#include <set>
#include <string>
#include <conio.h>
using namespace std;

// Subsets Generation using recursion
void subsets(char *in, char *out, int i, int j, set<string> & myString ){
	if(in[i]=='\0'){
		out[j]='\0';
		string S(out);
		myString.insert(S);
		cout<<out<<endl;
		return;
	}
// Recursive Case
//1. Inc
	out[j]=in[i];
	subsets(in,out,i+1,j+1, myString);
//2. Exc
	subsets(in,out,i+1,j,myString);
}
int main(){

	char in[100]="Pranav";
	char out[100];
	set<string> mySet;
	subsets(in,out,0,0,mySet);
	//Printing My set for-each loop.
	for(string s:mySet){
		cout<<s<<" ,"<<endl;
	}
//Your code comes here.
	getch();
	return 0;
}