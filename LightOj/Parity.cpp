#include<bits/stdc++.h>
using namespace std;
bool check(int n);

int main(){

	int t,n;
	cin>>t;

	for(int i=1;i<=t;i++){
		cin>>n;
		if(check(n)) cout<<"Case "<<i<<": even"<<endl;
		else cout<<"Case "<<i<<": odd"<<endl;
	}

}

bool check(int n){
	
	int sum=0;

	while(n){
		sum +=n%2;
		n=n/2;
	}

	if(sum%2) return false;
	else return true;

}

