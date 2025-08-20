#include<iostream>
using namespace std;

int main(){
	
	int n, temp,rem,sum ;
	cout<<"enter the number :";
	cin>>n;
	temp=n;
	
	while(n>0){
		rem=n%10;
		sum=rem+(sum*10);
		n=n/10;
	}
	
	if(sum==temp){
		cout<<" the given number is palindrome "<<endl;
		
	}
	else{
		cout<<"the given number is  not palindrome ";
		
	}
	return 0;
	
}
