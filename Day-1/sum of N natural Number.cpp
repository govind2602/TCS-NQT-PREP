#include<iostream>
using namespace std;

int main(){
	int n,sum;
	cout<<"enter the value of N= ";
	cin>>n;
	
	if(n<1) {
		cout<<"the value of  N is less then 1 ";
		return 0;
	
	}

	
	for(int i=0;i<=n;i++){
		sum=sum+i;
		
	}
	cout<<"the sum of "<<n<<"natural number is ="<<sum;
}
