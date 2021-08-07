#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int a[5];
int w[5];
bool check();
int cnt(int x);

int main(){
	
	int t;
	char ch;

	cin>>t;
	for(int i=1;i<=t;i++){
		
		cin>>a[0]>>ch>>a[1]>>ch>>a[2]>>ch>>a[3];
		cin>>w[0]>>ch>>w[1]>>ch>>w[2]>>ch>>w[3];

		if(check())cout<<"Case "<<i<<": Yes"<<endl;
		else cout<<"Case "<<i<<": No"<<endl;
	
	}

}

bool check(){
	
	for(int i=0;i<4;i++){
		if(a[i]!=cnt(w[i])) return false;
	}

	return true;
	
}

int cnt(int x){

	int sum=0;
	double b=2.0,p=0.0;


	while(x){
		
		double n = x%10;
		double ps= pow(b,p);

		sum += n*ps;
		
		x=x/10;
		p++;
		
	}

	return sum;
}

