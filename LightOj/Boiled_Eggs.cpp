#include<bits/stdc++.h>
using namespace std;
int a[31];
int count(int n,int p,int q);

int main(){

	int t,n,p,q;

	cin>>t;
	for(int i=1;i<=t;i++){
		
		cin>>n>>p>>q;

		for(int j=0;j<n;j++)
			cin>>a[j];
		
		cout<<"Case "<<i<<": ";
		cout<<count(n,p,q)<<endl;

	}

}

int count(int n,int p,int q){

	int sum=0,cnt=0;

	for(int i=0;i<n;i++){
		
		cnt++;
		sum+=a[i];

		if(cnt>=p || sum>=q) break;
	}

	if(cnt>p || sum>q) return cnt-1;
	return cnt;

}


