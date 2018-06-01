//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;
int main(){
	char a[1000];
	cin.getline(a,1000);
	char *ptr=strtok(a," ,+");
	while(ptr!=NULL){
		cout<<ptr<<endl;
		ptr=strtok(NULL," ,+");
	}
//Your code comes here.
	getch();
	return 0;
}