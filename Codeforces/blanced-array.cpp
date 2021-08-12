#include<stdio.h>
#include<stdlib.h>

void print(int a[], int n){
	int i;
	for(i=0;i<n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d\n",a[i]);
}

void build(int a[],int n){
	
	int i,j,x=2;
	long long int sum1=0,sum2=0;

	for(i=0;i<n/2;i++){
		a[i] = x;
		sum1 +=x;
		x+=2;
	}
	
	x=1;
	for(j=i;j<n-1;j++){
		a[j] = x;
		sum2+=x;
		x+=2;
	}

	int m=x;

	while(1){	

		if(sum1==(sum2+m)){
			a[j] = m;
			printf("YES\n");
			print(a,n);
			return;
		}

		if(sum1>(sum2+m)){
			m+=2;
			continue;
		}
		printf("NO\n");
		return;

		

	}


}

int main(){

	int t,n;
	int *a;

	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		a = (int *) malloc(sizeof(int) *n);

		build(a,n);
		free(a);


	}

	return 0;
}

