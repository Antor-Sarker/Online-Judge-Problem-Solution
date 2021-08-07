#include<bits/stdc++.h>
#include<cstring>
using namespace std;
bool check(char n[]);

int main(){
	
	int t;
	char n[15];

	cin>>t;
	for(int i=1;i<=t;i++){
		
		cin>>n;

		if(check(n)) cout<<"Case "<<i<<": Yes"<<endl;
		else cout<<"Case "<<i<<": No"<<endl;
	}

}

bool check(char n[]){
	
	int l = strlen(n);
	if(l==1) return true;

	for(int i=0,j=l-1;i<l/2;i++,j--)
		if(n[i]!=n[j]) return false;
	
	return true;

}

