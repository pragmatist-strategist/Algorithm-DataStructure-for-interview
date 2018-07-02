//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
using namespace std;
class queue
{
	int *arr;
	//Front->f, Rear->r,CurrentSize->cs,MaxSize->ms;
	int f,r,cs,ms;
public:
	queue(int init_size=5){
		arr=new int[init_size];
		cs=0;
		ms=init_size;
		f=0;
		r=init_size-1;
	}
	void push(int data){
		if(cs<ms){
			r=(r+1)%ms;
			arr[r]=data;
			cs++;
		}
	}
	void pop(){
		if(cs>0){
			f=(f+1)%ms;
			cs--;
		}
	}
	int front(){
		return arr[f];
	}
	bool empty(){
		return cs==0;
	}	
	bool full(){
		return cs==ms;
	}
};
int main(){
	queue q;
	for (int i = 0; i <=6; i++)
	{
		q.push(i);
		/* code */
	}
	q.pop();
	q.pop();
	q.pop();

	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
//Your code comes here.
	getch();
	return 0;
}