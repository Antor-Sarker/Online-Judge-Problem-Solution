#include<stdio.h>
int main(){

	int t,n,i;
	int a[100];

	scanf("%d",&t);
	
	for(i=0;i<t;i++){
		scanf("%d",&a[i]);
	
		if(i==0){
			if(a[0]>10){
				printf("%d %d\n",a[0]-10,10);
			}
			else{
				printf("0 %d\n",a[0]);
			}
		}

		else if(a[i]==a[i-1]){
			printf("%d %d\n",1,a[i]-1);
		}
		else if(a[i]>10){
			printf("%d 10\n",a[i]-10);
		}
		else{
			printf("0 %d\n",a[i]);
		}
	}

	return 0;
}

