#include<bits/stdc++.h>
using namespace std;
int sort(int *p,int n);

int main(){
	
	int *a;
	int t,n;

	cin>>t;

	for(int i=1;i<=t;i++){
		
		cin>>n;
		a = (int *)malloc(sizeof(int) * n);

		for(int j=0;j<n;j++)
			cin>>a[j];
		
		cout<<"Case "<<i<<": ";
		int count = sort(&a[0],n);
		cout<<count<<endl;

		free(a);

	}
}



int sort(int *p, int n){
	
	int index_min,c=0;
	
	for(int i=0;i<n-1;i++){
		index_min = i;

		for(int j=i+1;j<n;j++){
			if(p[j]<p[index_min]){
				index_min = j;
			}
		}

		if(index_min != i){
			
			c++;

			p[i] ^= p[index_min];
			p[index_min] ^= p[i];
			p[i] ^= p[index_min];

		}
	}

	return c;
}

