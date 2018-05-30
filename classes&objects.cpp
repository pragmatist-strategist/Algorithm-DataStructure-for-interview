//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <conio.h>
using namespace std;
//Defines the blueprint.
// Public and private are access-modifiers.
// Protected --->? read @ cplusplus.com

//Properties of a class:Every class has 4 hidden parameters.
//*ctr-Constructor.
//->Constructor-Initializes data members of  the class ,constructor- name is same class name.
//->Copy-Ctr- It copies the entire object completely.
//->Copy-Assignment operator.
//->Destructor-~ It destroys the object completely.
class Car
{

private:
	string name;
	int price;
public:
	//override the default ctr.
	Car(){
		//cout<<"Making a Car";
	}
	Car(int p, string n){
		price=p;
		name=n;
	}

	//copy ctr called
	Car(const Car &X){
		cout<<"In copy ctr"<< endl;
		name=X.name;
		price=X.price;
	}

	//Function overloading-> when you have multiple functions with same name.
	// e.g- "+", "=" ->operators
	void operator=(const Car &X){
		name=X.name;
		price=X.price;
	}

	//Const Function-it doesn't update class data members.
	void print() const{
		cout<<name<<endl;
		cout<<price<<endl;
	}
	
	//Setters--> Defn?
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
	//Getters-->Defn?
	int getPrice(){
		return price;
	}
	//Destroying Car. 
	~Car(){
		cout<<"Destroying Car "<<name<<endl;
	}
};
int main(){

	Car A; // constructing car A
	Car B(300, "Audi"); //parameters are also passed to constructors.
	//In other words, its a parameterised constructor.

	A.setName("BMW");
	A.setPrice(400);
	// passing the parameters to construct car A
	A.print();
	B.print();

	//Dynamic Car
	Car *x=new Car(1000, "Porsche");
	delete x;
	//Your code comes here.
	getch();
	return 0;
}
