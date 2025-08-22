#include<bits/stdc++.h>
using namespace std;


trailingZero(int n){
	int sum;
	while(n/5>0){
		sum+=(n/5);
		n=n/5;
		
	}
	return sum;
}
int main(){
	
int i;
cin>>i;
cout<<trailingZero(i);	
	
	
}
