#include<bits/stdc++.h>
using namespace std;
int a[500001];
int t,n,q,x,y;
int cnt();

int main(){

	cin>>t;
	for(int i=1;i<=t;i++){

		cin>>n>>q;

		//a = (int *) malloc(sizeof(int) * n);
		for(int j=0;j<n;j++) cin>>a[j];

		cout<<"Case "<<i<<":"<<endl;

		for(int k=1;k<=q;k++){
			cin>>x>>y;
			cout<<cnt()<<endl;
		}

		//free(a);

	}

}

int cnt(){

	int l,left,r,right,mid,sum;
	bool v;
	
	//find left value
	if(x<=a[0]) l=0;
	else{

		v=false;
		left = 0;
		right = n-1;

		while(left<=right){

		mid = (left + right)/2;
			if(a[mid]==x){
				l=mid;
				v=true;
				break;
			}
			else if(x<a[mid]) right = mid-1;
			else left=mid+1;
		}

		if(v==false) l=left;
	
	}

	//find right value
	if(y>=a[n-1]) r=n-1;
	else{

		v=false;
		left = 0;
		right = n-1;

		while(left<=right){
		
		mid = (left + right)/2;
			if(a[mid]==y){
				r=mid;
				v=true;
				break;
			}
			else if(y<a[mid]) right = mid-1;
			else left=mid+1;
		}

		if(v==false) r=right;
	
	}


	sum = r-l;
	sum++;

	return sum;
}


