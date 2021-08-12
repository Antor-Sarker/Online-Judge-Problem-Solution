#include<stdio.h>
int main(){

	int a[10][10];
	int i,j,n;
	scanf("%d",&n);
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			
			if(i==0){
				a[i][j]=1;
			}
			
			else{
				
				if(j==0){
					a[i][j]=1;
				}
				
				else{
					a[i][j]=a[i-1][j]+a[i][j-1];	
				}
			}

		}

	}

	printf("%d\n",a[n-1][n-1]);


	return 0;
}

