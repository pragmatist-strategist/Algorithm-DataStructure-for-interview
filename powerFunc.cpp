//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
//Problem Statement- Find the nth power of a function and then optimise
//the code . Time complexity should be <O(N).
#include <iostream>
#include <conio.h>
using namespace std;
//traditional method-> O(N)
int power(int a, int n){
	return n==0? 1: a*power(a,n-1);
}
//Optimised Code
int fastPower(int a, int n){
	if(n==0){
		return 1;
	}
	int a1=fastPower(a,n/2);
	a1*=a1;
	return (n&1)?a*a1:a1;
}
int main(){
//Your code comes here.
	cout<<power(3,5)<<endl;
	cout<<fastPower(3,5)<<endl;
	getch();
	return 0;
}