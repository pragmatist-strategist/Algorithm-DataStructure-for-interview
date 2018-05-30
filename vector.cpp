//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
// Implementing a Vector class
// a Vector class has following operations:
// 1. Push_back- Add elements to end (It automatically doubles the memory)
// 2. Pop- Remove elements from the end.
// 3. []operator -find elements at ith index.
// 4. v1+v2- append two vectors. 
// although we have a pre-defined header file-> #include<vector> for the same.
//ms-> maximum size; cs-> current size
// all the functions are self explainatory.Still for reference refer cplusplus.com
// some functions are not defined as of now-> HW for me.
#include <iostream>
#include <conio.h>
using namespace std;
class Vector
{
	int *arr;
	int ms;
	int cs;
public:
	Vector(int def_size=4){
		ms=def_size;
		cs=0;
		arr=new int [ms];
	}
	Vector(Vector &v){
		cs=0;
		ms=v.ms;
		arr=new int [ms];

		for (int i = 0; i < v.size(); i++)
		{
			push_back(v[i]);
			/* code */
		}

	}
	int size(){
		return cs;
	}
	void push_back(int data){
		if(cs==ms){
			//Doubling the size of array later.
			int *oldArr=arr;
			int oldCs=cs;
			ms*=2;
			arr=new int[ms];
			for (int i = 0; i < oldCs; i++)
			{
				/* code */
				arr[i]=oldArr[i];

			}
		}
		arr[cs]=data;
		cs++;
	}
	void pop_back(){
		if (cs>0)
		{
			/* code */
			cs--;
		}
	}
	void print() const{
		for (int i = 0; i < cs; i++)
		{
			/* code */
			cout<<arr[i]<<" ,";
		}
		cout<<endl;
	}
	int getMaxSize(){
		return ms;
	}
	int& operator[](int i){
		return arr[i];
	}
	~Vector(){
		if(arr!=NULL){
			delete [] arr;
			arr=NULL;
		}
	}
	
};
// task to be done -> add +,!,~Destructor
ostream& operator<<(ostream&os, const Vector&v){
	v.print();
	return os;
}

int main(){
	Vector v1;
	v1.push_back(1);
	v1.push_back(5);
	v1.push_back(10);
	v1.push_back(7);
	v1.push_back(8);
	v1.push_back(11);
	Vector v2=v1;
// v1.pop_back();
	v1[0]=100;
	cout<<v1<<endl;
	cout<<v2<<endl;
	cout<<v1.getMaxSize()<<endl;
//cout<<v1<<v2<<endl
//Your code comes here.
	getch();
	return 0;
}