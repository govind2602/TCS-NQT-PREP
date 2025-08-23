#include<iostream>
using namespace std;

int main(){
	int n ,sum=0,rem,dupn  ;
	
	cin>>n;
	dupn=n;
	while(n>0){
		rem=n%10;
		int fact=1;
		for(int i=1;i<=rem;i++){
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(dupn==sum){
		cout<<"strong number";
	}
	else{
		cout<<"not a strong number";
	}
}
