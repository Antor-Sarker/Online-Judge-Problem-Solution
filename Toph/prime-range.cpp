#include<bits/stdc++.h>
using namespace std;
bool p[100000001];
long long int c[33333335];

void make_prime();
void cnt_prime();

int main(){
	make_prime();
	cnt_prime();
	int t,x,y;

	cin>>t;
	while(t--){
		 cin>>x>>y;
		
		if(x<y)
			cout<<c[y]-c[x-1]<<endl;
		else if(x>y)
			cout<<c[x]-c[y-1]<<endl;
		else
			cout<<c[x]<<endl;
	}


}

void make_prime(){
	
	long long int i,j;
	p[1]=1;

	for(i=3;i*i<100000000;i+=2){
		
		if(p[i]==true)
			continue;
		
		for(j=3;i*j<100000000;j+=2){
			p[i*j]=true;
		}
	
	}
}


void cnt_prime(){
		
		int i,j=3;
		
		c[1]=2;
		c[2]=5;

		for(i=5;i<100000000;i+=2){
			if(p[i]==false){
				c[j]=i+c[j-1];
				j++;
			}
		}
}

