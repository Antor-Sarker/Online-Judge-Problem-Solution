#include<stdio.h>
int n[423456];

void make();
void sub(long long int x);

int main(){

	long long int t,x,y;
	make();

	scanf("%lld",&t);

	while(t--){
		scanf("%lld%lld",&x,&y);
		sub(x-y);
	}


	return 0;
}

void make(){
	long long int i,j;
	n[1]=1;

	for(i=2;i*i<423455;i++){
		if(n[i]==1)
			continue;

		for(j=2;i*j<423455;j++){
			n[i*j] = 1;
		}

	}

}


void sub(long long int x){
	long long int i;

	if(x==1){
		printf("NO\n");
	}
	else{
		printf("YES\n");
	}

	return;

	for(i=2;i<423455;i++){
		if(n[i]==0){
			if(x%i==0){
				printf("YES\n");
				return;
			}
		}
	}

	printf("NO\n");
	
}

