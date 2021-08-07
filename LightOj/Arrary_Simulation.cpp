#include<bits/stdc++.h>
using namespace std;
int a[101];
int n;
void cal(int x,char c);
void rotation();

int main(){
	
	int t,m,x,y,z;
	char c;

	cin>>t;
	
	for(int i=1;i<=t;i++){
		
		cin>>n>>m;

		for(int j=0;j<n;j++)
			cin>>a[j];

		for(int k=1;k<=m;k++){
			
			cin>>c;
			if(c=='S'){
				cin>>x;
				cal(x,c);
			}

			else if(c=='M'){
				cin>>x;
				cal(x,c);
			}

			else if(c=='D'){
				cin>>x;
				cal(x,c);
			}

			else if(c=='P'){
				int b;
				cin>>y>>z;
				
                b=a[y];
                a[y]=a[z];
                a[z]=b;		
			}

			else{
				if(c=='R') rotation();
			}

		}



		cout<<"Case "<<i<<":"<<endl;
		cout<<a[0];

		for(int l=1;l<n;l++){
			cout<<" "<<a[l];
		}

		cout<<endl;
		

	}


}


void cal(int x,char c){
	
	if(c=='S'){
		for(int i=0;i<n;i++)
			a[i]+=x;
	}
	
	else if(c=='M'){
		for(int i=0;i<n;i++)
            a[i]*=x;
	}

	else if(c=='D'){

		for(int i=0;i<n;i++)
            a[i]/=x;
	}

}

void rotation(){
	
	int x =n-1;
    int b;

	for(int i=0;i<n/2;i++){
		a[i] ^= a[x];
		a[x] ^= a[i];
		a[i] ^= a[x];
        
		x--;
	}

}

