#include<bits/stdc++.h>
using namespace std;

int a[1001];
int x[1001];
void add();
void sort();
void equal(int n);

int main(){
	
	add();
	sort();

	int t,n;
	cin>>t;

	for(int i=1;i<=t;i++){
		
		cin>>n;

		cout<<"Case "<<i<<": ";

		equal(n);
	}


}

void add(){

	int c=0;

	a[1]=1;
	x[1]=1;

	for(int i=2;i<=1000;i++){
		x[i]=i;	
		c=0;

		for(int j=2;j<=i/2;j++)
			if(i%j==0) c++;

		c+=2;
		a[i]=c;

	}

}

void sort(){
	
	for(int j=0;j<1000;j++){
	
		for(int i=0;i<1000-j;i++){
		
			if(a[i]>a[i+1]){
			
				a[i]^=a[i+1];
				a[i+1]^=a[i];
				a[i]^=a[i+1];

				x[i]^=x[i+1];
				x[i+1]^=x[i];
				x[i]^=x[i+1];

			}
		}
	}


}


void equal(int n){

	int q=a[n],i,j;

	for(i=0;i<1001;i++){
		if(a[i]==q) break;
	}

	int w=i;

	for(j=i;j<1001;j++){
		if(a[j]!=q) break;
	}

	j--;

	if(j==w){
		cout<<x[n]<<endl;
		return;

	}

	w = (n-w);
	j-=w;

	cout<<x[j]<<endl;


}



