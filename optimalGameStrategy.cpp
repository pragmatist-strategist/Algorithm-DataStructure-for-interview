//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
// Problem statement: Consider a row of n coins of values v1 . . . vn, where n is even. We play a game against an opponent by alternating turns. In each turn, a player selects either the first or last coin from the row, removes it from the row permanently, and receives the value of the coin. Determine the maximum possible amount of money we can definitely win if we move first.
// Note: The opponent is as clever as the user.
#include <iostream>
#include <conio.h>
using namespace std;
int foo(int *a, int i, int j){
	if (i>j)
	{
		return 0;
		/* code */
	}
	int op1=a[i]+min(foo(a,i+1,j-1),foo(a,i+2,j));
	int op2=a[j]+min (foo(a,i,j-2),foo(a,i+1,j-1));
	return max(op1,op2);
}
int main(){
//Your code comes here.
	int a[]={3,16,7,4,15,8,20,10};
	cout<<foo(a,0,7)<<endl;
	getch();
	return 0;
}