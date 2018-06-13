//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
//Sort an array using STL function.
#include <iostream>
#include <algorithm>
#include <conio.h>
using namespace std;
bool compare(int a,int b){
	cout<<"compare "<<a<<" and "<<b<<endl;
	return a>b;
}
int main(){
	int a[]={1,3,5,2,4,8,9};
	int n=sizeof(a)/sizeof(int);
	//int n=5;
	sort(a,a+n,compare);

	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" "<<endl;
		/* code */
	}
//Your code comes here.
	getch();
	return 0;
}