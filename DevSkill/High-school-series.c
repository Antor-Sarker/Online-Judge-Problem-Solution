#define ONLINE_JUDGE 1
#include<stdio.h>
#include<math.h>

int s(int n){
	
	int j,sum=0;
	
	for(j=1;j<=n;j++){
		sum +=pow(j,3);
	}
	
	return sum;
}


int main(){
	
	int t,i,n;
	scanf("%d",&t);
	
	for(i=1;i<=t;i++){
		scanf("%d",&n);
		printf("Case %d: %d\n",i,s(n));
	}


	return 0;
}
