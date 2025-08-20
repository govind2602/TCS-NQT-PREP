#include<iostream>
using namespace std;

int main(){
	
	int n,arm=0,dup,rem;
	
	cout<<"Enter the number: ";
	cin>>n;
	
	dup=n;
	while(n>0){
	rem=n%10;
	arm=(rem*rem*rem)+arm;
	n=n/10;	
	}
	if(arm==dup){
		cout<<"the given number is armstrong number";
		
	}
	else{
		cout<<" not a armstrong number";
	}
}
