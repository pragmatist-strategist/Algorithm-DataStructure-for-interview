//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
// Question is as follows->
// Replace all occurrences of pi with 3.14

// Input Format: 
// Integer N, no of lines with one string per line
// Constraints: 
// 0 < N < 1000
// 0 <= len(str) < 1000
// Output Format: 
// Output result one per line

// Sample Input: 
// 3

// xpix

// xabpixx3.15x

// xpipippixx

// Sample Output: 
// x3.14x

// xab3.14xx3.15x

// x3.143.14p3.14xx



#include <iostream>
#include <conio.h>
using namespace std;
void replacePi(char *in,int i){
	if(in[i]=='\0'){
		return;
	}
	//Rec Case
	//word 'pi' found? replace it with 3.14: continue.
	if(in[i]=='p'&&in[i+1]=='i'){

		int j = i+2;
		while(in[j]!='\0'){
			j++;
		}
		while(j>(i+1)){
			in[j+2] = in[j];
			j--;
		}

		in[i] = '3';
		in[i+1] = '.';
		in[i+2] = '1';
		in[i+3] = '4';

		replacePi(in,i+4);
		return;
	}
	else{
		replacePi(in,i+1);
	}
}
int main(){
	char in[100];
	cin>>in;

	char out[100];
	replacePi(in,0);
	//cout<<in<<endl;
//Your code comes here.
	getch();
	return 0;
}