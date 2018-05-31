//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
//Problem Statement- Find all possible permutations of a given string.
#include <iostream>
#include <conio.h>
using namespace std;
void  printPermutation(char *input, int i){
	if(input[i]=='\0'){
		cout<<input<<endl;
		return;
	}
	//Recursion Case
	for (int j = i; input[j] !='\0'; j++)
	{
		//Top Down approach
		swap(input[i], input[j]);
		printPermutation(input, i+1);
		//Bottom up
		//BACKTRACKING
		swap(input[i], input[j]);
	}
}

int main(){
	char input[100];
	cin>>input;
	printPermutation(input,0);
//Your code comes here.
	getch();
	return 0;
}