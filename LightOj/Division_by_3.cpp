#include<bits/stdc++.h>
using namespace std;
int count(int a,int b);

int main(){

	int t,a,b;

	cin>>t;
	for(int i=1;i<=t;i++){
		
		cin>>a>>b;
		cout<<"Case "<<i<<": ";
		cout<<count(a,b)<<endl;

	}

}


int count(int a,int b){
	
	if(a>b){
		a^=b;
		b^=a;
		a^=b;
	}
	a--;

	long long int y,z,x;

	if(b%3==0){
		z = b;
		z = z - z/3;
		
		if(a%3==0){
			y = a - a/3; 

			return z-y;
		}

		else{
			
			if(a==0) return z;
			
			if((a+1)%3 !=0){
                a--;
				y = a - (a/3);

				return z - y;
			}
            else if((a+1)%3==0){
				
                a++;
            	y = a - a/3;
                y--;
                return z-y;
            }
		}

	}

	else{
		
		if((b+1)%3==0){
			b++;
			x=b/3;
			z=b-x;
            z--;
		}

		else{
			
			b--;
			z = b - (b/3);
		}

	}
	


	//a
	
	if(a%3==0){
		y = a - (a/3);
	}

	else{

		if(a==0) y=0;	
		else if((a+1)%3==0){
			y = (a+1) - ((a+1)/3);
            y--;
		}

		else if((a+1)%3 !=0){
			a--;
			y = a - (a/3);

		}


	}


	return z-y;
	

}

