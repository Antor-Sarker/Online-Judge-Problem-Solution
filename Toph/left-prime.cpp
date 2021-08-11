#include<bits/stdc++.h>
void make_prime();
void cnt_prime();
using namespace std;

int p[10000001];
int c[10000001];

int main(){
	
	int t,n;
	make_prime();
	cnt_prime();

	cin>>t;

	while(t--){
		cin>>n;
		cout<<c[n-1]<<endl;
	}

}

void make_prime(){
	int i,j;
	p[1]=1;

	for(i=3;i*i<=10000000;i+=2){
		for(j=3;i*j<=10000000;j+=2){
			p[i*j]=1;
		}
	}
}

void cnt_prime(){
	
	int i,cnt=1;
	c[1]=0;
	c[2]=1;

	for(i=3;i<=10000000;i++){
		if(i%2==0)
			c[i]=cnt;

		else{
			
			if(p[i]==0){
				cnt++;
				c[i]=cnt;
			}
			
			else
				c[i]=cnt;
		}
		
	}
}
