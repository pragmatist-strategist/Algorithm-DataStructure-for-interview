//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
//Tower Of Hanoi problem with a little optimised code.
//Only the optimised power function is used. Rest of code is same is that of recursive program of TOH.
#include <iostream>
#include <conio.h>
using namespace std;

void TowerOfHanoi(int n, char src, char help, char dest){
	if(n==0){ //Base case
		return;
	}
	TowerOfHanoi(n-1, src,dest,help);
	cout<<"Move Disk "<<n<<" from "<<src<<" to "<<dest<<endl;
	TowerOfHanoi(n-1,help,src,dest);
}
int steps(int n){
	if(n==0){ //Base Case
		return 0;
	}
	return 2*steps(n-1)+1;
}
//Optimization !
int fastSteps(int n){
	return(1<<n)-1; // read about << operator's functionality.
}

int main(){
	int n;
	cin>>n;
	TowerOfHanoi(3, 'A', 'B', 'C');
	cout<<steps(n);
//Your code comes here.
	getch();
	return 0;
}