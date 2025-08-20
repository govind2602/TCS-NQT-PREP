#include<iostream>
using namespace std;

int main(){
	
	int n,digit,sum=0;
	cout<<"Enter the number : ";
	cin>>n;
	
	while(n>0){
		digit=n%10;
		sum=sum+digit;
		n=n/10;
		
	}
	cout<<"the sum of digit of a number is : "<<sum;
}
