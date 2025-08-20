#include<iostream>
using namespace std;

int main(){
	
	int n, count=0;
	cout<<"enter the number :";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		cout<<"\n the number is prime ";
		
	}
	else {
		cout<<"the given number is not prime";
	}
}
