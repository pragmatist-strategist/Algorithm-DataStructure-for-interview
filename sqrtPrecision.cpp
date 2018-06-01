//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
//Find the square root to a precison without using any pre existing header files .
int sqrt(int num){
	int start=0;
	int end=num;
	int ans;
	while(start<=end){
		int mid=(start+end)/2;
		//Is middle is the sqrt of given number?
		if(mid*mid==num){
			return mid;
		}
		//If mid*mid>num-> reduce middle-=1
		else if(mid*mid > num){
			ans=mid;
			end=mid-1;
		}
		else if(mid*mid < num){
			ans=mid;
			start=mid+1;
		}
	}
	return ans;
}
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	cout<<sqrt(26);
//Your code comes here.
	getch();
	return 0;
}