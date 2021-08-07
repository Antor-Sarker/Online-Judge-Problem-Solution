#include<bits/stdc++.h>
using namespace std;

int main(){

	int t,n,x;
	string s;
	string d = "donate";
	string r = "report";

	cin>>t;
	for(int i=1;i<=t;i++){
		
		int sum = 0;
		cin>>n;
		cout<<"Case "<<i<<":"<<endl;

		while(n--){
			
			cin>>s;
			if(s==d){
				cin>>x;
				sum+=x;
			}

			else cout<<sum<<endl;	

		}

	}

}

