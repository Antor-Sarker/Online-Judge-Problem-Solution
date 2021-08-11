#define MAX 99930400
#include<bits/stdc++.h>
using namespace std;
bool p[MAX];
long long int cnt_divisor(int n);
void make_prime();

int main(){
		
	int t,n;
	long long int sum = 0;
	make_prime();
	cin>>t;

	while(t--){
		cin>>n;
		sum = cnt_divisor(n);
		
		if(sum==2)
			cout<<"Yes"<<endl;
		
		else if(sum%2==0)
			cout<<"No"<<endl;

		else{
		
			if(p[sum]==true)
				cout<<"No"<<endl;
			
			else
				cout<<"Yes"<<endl;	
		}

	}
}

long long int cnt_divisor(int n){
	
	long long int cnt=0;
	int i;

	for(i=1;i*i<=n;i++){
		
		if(n%i==0){
			if(n/i==i)
				cnt+=i;
			
			else{
				cnt+=i;
				cnt+=(n/i);
			}
		}
	}

	
	return cnt;
}

void make_prime(){
	
	long long int i,j;
	
	p[1] = true;
	
	for(i=3;i*i<=MAX;i+=2){
		
		if(p[i]==true)
			continue;
		
		for(j=3;i*j<=MAX;j+=2){
			p[i*j] = true;	
		}
	}
}
