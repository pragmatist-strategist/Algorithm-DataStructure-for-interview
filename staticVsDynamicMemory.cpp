//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
using namespace std;
int *createArray(){
	int *a=new int[100];
	for(int i=0;i<=10;i++){
		a[i]=i;
	}
	return a;
}
int main(){
	int *x=createArray();
	for (int i=0;i<=10;i++){
		cout<<x[i]<<endl;
	}
	delete [] x;
//Your code comes here.
	getch();
	return 0;
}