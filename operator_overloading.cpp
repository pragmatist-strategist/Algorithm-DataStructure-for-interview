//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
// detailed documentation is there in Classes&objects.cpp
// refer those documentaion for this as well because majority of things are same. 
//Step 1: Defining a Blueprint.
#include <iostream>
#include <conio.h>
using namespace std;
class Car
{

private:
	string name;
	int price;
public:
	// over-riding the default str 
	Car(){
		//cout<< "Making a car "<<endl;
	}
	//Parameterised Constructor
	Car(int p, string n){
		price=p; 
		name=n;
	}
	//Copy constructor
	Car(const Car &X){
		cout<< "In Copy constructor"<<endl;
		name=X.name;
		price=X.price;
	}

	//Function overloading -> when you have multiple function with the samae name.
	void operator=(const Car &X){
		name=X.name;
		price=X.price;
	}

//Constant Function- It doesn't updtae class dat members.
	void print() const{
		cout<<name<<endl;
		cout<<price<<endl;
	}

//Setters
	void setName(string n){
		if(n!= ""){
			name=n;
		}
	}
	void setPrice(int p){
		if(p>100){
			price=p;
		}
	}
//Getters
	int getPrice(){
		return price;
	}
	void operator+(Car X){
		name=name+ X.name;
		price=price+X.price;
	}
	void operator[](string driver){
		cout<<name<<" is driven by "<<driver<<endl;
	}
	void operator!(){
		cout<< "I don't like " <<name<<endl;
	}
	~Car(){
		//cout<<"Destroying car "<<name<<endl;
	}
};
int main(){
	Car A;// Normal Constructor.
	Car B(300, "Audi"); // parameterised constructor

//setters for A
	A.setName("BMW");
	A.setPrice(400);
	A.print();
	B.print();

	cout<<A.getPrice()<<endl;
	Car C(B); //Call copy constructor
	C.print();
	cout<<"Car C";

	Car D= B;
	D.print();
	cout<<"Car D";

	Car E;// Normal Constructor.
	E=D;//copy assignment operator
	E.print();

	E+A;
	E.print();
	E["Ram"]; // same as E[].("Ram");
	!E;
	//Dynamic car
	Car *x = new Car(1000, "Porsche");
	delete x;
	//Your code comes here.
	getch();
	return 0;
}