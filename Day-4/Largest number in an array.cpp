#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter the size of an array";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int high=arr[0];
	for(int i=0;i<=n;i++){
		if(arr[i]>high){
			high=arr[i];
		}
	}
	cout<<"the largest number in the given array is :"<<high;
}
