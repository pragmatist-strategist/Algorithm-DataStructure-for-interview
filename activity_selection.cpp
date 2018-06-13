//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
// Refer the video first.. question not clear.
#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;

bool compare(pair<int,int> a1, pair<int,int> a2){
	return a1.second < a2.second;
}

int countActivities(std::vector<pair<int,int> > v){
	//Sort based on end time.
	sort(v.begin(), v.end(), compare);
//pick the first activity
	int finish=v[0].second;
	int count=1;
	for(int i=1;i<v.size();i++){
		int current_Start=v[i].first;
		if(current_Start>=finish){
			count++;
			finish=v[i].second;
		}
	}
	return count;
}
int main(){
	int t;
	cin>>t;
	vector<pair<int,int> > v;
	while(t--){
		int n;
		cin>>n;
		v.clear();
		int start,end;
		for(int i=0;i<n;i++){
			cin>>start>>end;
			v.push_back(make_pair(start,end));
		}
		cout<<countActivities(v);
	}
	getch();
	return 0;
}