//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
//This is the agressive cows question from spoj.
// Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls.
// The stalls are located along a straight line at positions x1,...,xN (0 <= xi <= 1,000,000,000).

// His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. 
//To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. 
//What is the largest minimum distance?
// Input
// t – the number of test cases, then t test cases follows. 
// * Line 1: Two space-separated integers: N and C
// * Lines 2..N+1: Line i+1 contains an integer stall location, xi
// Output
//For each test case output one integer: the largest minimum distance.
#include <iostream>
#include <conio.h>
using namespace std;
bool canPlace(int c,int n, int *x,int D){
	int cow=1;//0th stall
	int last_stall=x[0];

	for (int i = 0; i < n; i++)
	{
		int current_stall=x[i];
		if (current_stall-last_stall>=D)
		{
			cow++;
			last_stall=current_stall;
			/* code */
		}
		if (cow==c)
		{
			return true;
			/* code */
		}
		/* code */
	}
	return false;
}
int binarySearch(int c,int n,int *x){
	int start=0;
	int end=x[n-1];
	int ans=-1;
	while(start<=end){
		int mid=(start+end)/2 ;
		if (canPlace(c,n,x,mid))
		{
			ans=mid;
			start=mid+1;
			/* code */
		}
		else end=mid-1;
	}
	return ans;
}
int main(){
	int cows=3;
	int stalls=5;
	int x[]={1,2,4,8,9};
	cout<<binarySearch(cows,stalls,x)<<endl;
//Your code comes here.
	getch();
	return 0;
}