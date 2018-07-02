//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <vector>
#include <conio.h>
using namespace std;
	template<typename T>
class stack
{
	std::vector<T> v;
public:
	stack(int init_size=10){
		v.reserve(init_size);
	}
	void push(T data){
		v.push_back(data);
	}
	void pop(){
		v.pop_back();
	}

	T top() const{
		int i=v.size()-1;
		return v[i];
	}
	bool isEmpty() const{
		return v.size()==0;
	}
	
};
int main(){

	stack<float> s;
	float b=65.34;
	for (int i = 0; i < 6; i++)
	{
		s.push(i+b);
		/* code */
	}
	while(!s.isEmpty()){
		cout<<s.top()<<endl;
		s.pop();
	}
//Your code comes here.
	getch();
	return 0;
}