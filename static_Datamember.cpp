//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
using namespace std;
int fun(){
	static int i=0;
	i++;
	return i;
}
int main(){
	cout<<fun()<<endl;
	cout<<fun()<<endl;
	cout<<fun()<<endl;
	cout<<fun()<<endl;
	cout<<fun()<<endl;
	cout<<fun()<<endl;
//Your code comes here.
	getch();
	return 0;
}