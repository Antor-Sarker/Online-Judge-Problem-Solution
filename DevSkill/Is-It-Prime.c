#define ONLINE_JUDGE 1
#include<stdio.h>
#include<math.h>

void p(int n){

	int j,x;
	x=sqrt(n);

	for(j=2;j<=x;j++){
		if(n%j==0) break;
	}

	if(n>1 && j==x+1){
		printf("Yes\n");
	}

	else{
		printf("No\n");
	}
}

int main(){
	
	int i,t,n;
	scanf("%d",&t);
	
	while(t--){
		scanf("%d",&n);
		p(n);
	}
	
	return 0;
}
