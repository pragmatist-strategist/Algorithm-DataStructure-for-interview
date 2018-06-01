//Pranav Sharma//
//“You don't have to be great to start, but you have to start to be great.”
//Classical Searching algorithm-> the binary search.
//Pre-requisite: The array must be sorted. Only then this algo will work.
#include <iostream>
#include <conio.h>
using namespace std;

int binarySearch(int *arr, int n, int key){
	int start=0;
	int end=n-1;
	while(start<=end){
		int mid=(start+end)/2 ;
		//If element found @ mid index:
		if(arr[mid]==key){
			return mid;
		}
		//Element to be searched is smaller-> search in left. 
		//This means reduce the size of array from right end.
		else if(arr[mid]>key){
			end=mid-1;
		}
		//Element to be searched is larger-> search in right.
		//This means reduce the size of array from left end.
		else{
			start=mid+1;
		}
	}
	// if start>end ->return 
	return -1;
}

//An alternative to binary search.
//In this algorithm, we first declare ans as -1 and then we keep on replacing it.
int lowerSearch(int *arr, int n, int key){
	int start=0;
	int end=n-1;
	int ans=-1;

	while(start<=end){
		int mid=(start+end)/2 ;
		if(arr[mid]==key){
			return mid;
		}
		//Same logic as binary search
		else if(arr[mid]>key){
			ans=mid;
			end=mid-1;
		}
		//Again, same as binary search
		else{
			start=end-1;
		}
	}
	return ans;
}
int main(){
	int arr[]={1,3,4,5,6,6,7,8,9,11,23,44,67,90};
	int n= sizeof(arr)/sizeof(int);
	cout<<binarySearch(arr,n,23)+1<<endl;
	cout<<lowerSearch(arr,n,67)+1<<endl;
//Your code comes here.
	getch();
	return 0;
}