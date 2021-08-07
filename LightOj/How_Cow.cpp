#include<bits/stdc++.h>
using namespace std;
bool check(int a,int b);
int x1,y,x2,yy;

int main(){
	
	int t,n,a,b;
	cin>>t;

	for(int i=1;i<=t;i++){
		
		cin>>x1>>y>>x2>>yy;
		cin>>n;
		cout<<"Case "<<i<<":"<<endl;

		while(n--){

			cin>>a>>b;
		
			if(check(a,b)) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		
		}
		
	}

}


bool check(int a,int b){

	if(	(a>=x1) && (a<=x2) && (b>=y) && (b<=yy) ) return true;
	else return false;

}


