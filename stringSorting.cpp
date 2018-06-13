//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <conio.h>
using namespace std;

bool compare(pair<string,int> f1,pair<string,int> f2){
	return f1.second < f2.second;
}
int main(){

	int n;
	cin>>n;
	string name;
	int price;
	std::vector<pair<string,int> > fruits;
//Your code comes here.
	for (int i = 0; i < n;i++)
	{
	/* code */
		cin>>name;
		getline(cin,name);
		fruits.push_back(make_pair(name,price));
	}
	sort(fruits.begin(), fruits.end(),compare);
	for (int i = 0; i < n; i++)
	{
		cout<<fruits[i].first<<" , "<<fruits[i].second;
	/* code */
	}

	getch();
	return 0;
}