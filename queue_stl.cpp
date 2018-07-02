//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
#include <queue>
using namespace std;
int main(){
	queue<int> q;
	for (int i = 0; i <=6; i++)
	{
		q.push(i);
		/* code */
	}
	q.pop();
	q.pop();
	q.push(7);
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
//Your code comes here.
	getch();
	return 0;
}