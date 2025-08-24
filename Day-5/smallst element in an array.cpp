#include<iostream>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	int  smallest=arr[0];
	
	for(int i=0;i<n;i++){
		if(smallest>arr[i]){
			smallest=arr[i];
			
		}
		
	}
	cout<<smallest;
}
