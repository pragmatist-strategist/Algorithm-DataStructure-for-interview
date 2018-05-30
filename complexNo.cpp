//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
//Complex Numbers
//Constructor, Copy Constructor, Copy Assignment.
//Operator overloading 
//C1+C2;
// cout<<C1; // A+iB
//cin>>C1; //A, B
//C1*C2; 
//!C1;
//C['r']->real part;
//C['i']->img Part;
#include <iostream>
#include <conio.h>
using namespace std;
class complexNo
{
	int r;
	int i;
public:
	complexNo(){
		r=0;
		i=0;
	}
	complexNo(int r, int i){
		this->r=r;
		this->i=i;
	}
	complexNo(const complexNo &c){
		r=c.r;
		i=c.i;
	}
	void operator=(const complexNo &c){
		r=c.r;
		i=c.i;
	}
	void print() const{
		if(i>=0){
			cout<<r<<" + "<<i<<"i"<<endl;
		}
		else{
			cout<<r<<" - "<<-1*i<<"i"<<endl;
		}
	}
	void operator+(const complexNo &c){
		r+=c.r;
		i+=c.i;
	}

	int operator[](char x){
		if(x=='r'){
			return r;
		}
		else{
			return i;
		}
	}
	void setValues(int r, int i){
		this->r=r;
		this->i=i;
	}
	~complexNo(){

	}
	
};
istream& operator>>(istream &xyz, complexNo &c){
	int a,b;
	cin>>a>>b;
	c.setValues(a,b);
	return xyz;
}
ostream& operator<<(ostream &abc, complexNo &c){
	c.print();
	return abc;
}
int main(){
	complexNo C1, C2;
	cin>>C1>>C2;
// c1+c2;
// cascading of operators 
	cout<<C1<<C2;
	cout<<C1['r'];
//Your code comes here.
	getch();
	return 0;
}