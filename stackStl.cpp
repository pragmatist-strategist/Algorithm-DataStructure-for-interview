//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <stack>
#include <conio.h>
using namespace std;
int main(){

	stack<float> s;
	float b=65.5;

	s.push(1+b);
	s.push(2+b);
	s.push(3+b);
	s.push(4+b);
	s.push(5+b);
	s.push(6+b);
// while my stack is not empty, i wil see the topmost element and pop it.
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
//Your code comes here.
	getch();
	return 0;
}