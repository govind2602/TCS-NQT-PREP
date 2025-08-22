#include<bits/stdc++.h>
using namespace std;

int countBits(int n){
	int count=0;
	while(n){
		count+=n&1;
		n>>=1;
	}
	return count;
}

int main(){
	int i;
	cout<<"Enter the number :";
	cin>>i;
	cout<<"\n the number of  1 bits  in the given number is = "<<countBits(i);
	
	return 0;
}
