//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
using namespace std;
void fun(int &z){
	z++;
}
int main(){
	int x=10;
	//y and x are same bucket ,y is a reference variable.
	int &y=x;

	y++;
	//x++;
	// no increment is seen in value of y-> it's value remains same as that of x
	fun(y);
	cout<<y<<endl;
	cout<<x<<endl;
	//cout<<z<<endl;
//Your code comes here.
	getch();
	return 0;
}