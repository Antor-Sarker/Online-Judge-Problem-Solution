#include<bits/stdc++.h>
using namespace std;
void count(int n,int m);

int main(){

	int t,n,m;
	cin>>t;

	for(int i=1;i<=t;i++){

		cin>>n>>m;
		cout<<"Case "<<i<<": ";
		count(n,m);
	}


	return 0;
}


void count(int n, int m){
	
	long long int s = (m+1)-1;
    s= s*(n/2);
    cout<<s<<endl;

}

