#include<iostream>
using namespace std;

int main(){
	
	int n,count;
	cin>>n;
	
while(n){
	n=n/10;
	count++;
}
cout<<count;
}
