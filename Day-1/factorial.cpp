#include<iostream>
using namespace std;

int main(){
	int n,fact=10;
	cout<<"enter the value of n ";
	cin>>n;
	if(n<0){
		cout<<"the value of 1 is less then 0";
		return 1;
		
	}
	if(n==0){
		return 0;
	}
	
	for(int i=1;i<=n;++i){
		fact*=i;
	}
	cout<<" the factorial of the "<<n<<"is ="<<fact<<endl;
	
	
}
