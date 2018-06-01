//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
//This program finds the no. of 1's in the binary equivalent of the number.
//For e.g- 12->1100 So the ans is 2.
//For e.g- 13->1101 So the ans is 3.
//This uses Bitmasking technique. A little hard to understand.
#include <iostream>
#include <conio.h>
using namespace std;

int findSetBits(int n){
	int ans=0;
	while(n>0){
		ans++;
		int p= n&(-n);
		n=n-p;
	}
	return ans;
}

int main(){
	int n;
	cin>>n;
	cout<<findSetBits(n)<<endl;
//Your code comes here.
	getch();
	return 0;
}