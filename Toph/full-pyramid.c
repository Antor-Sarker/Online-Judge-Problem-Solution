﻿#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		for(k=n-i;k>0;k--){
			printf(" ");
		}
		
		for(j=1;j<=i;j++){
			
			if(j==1){
				printf("*");
			}
			
			else{
				printf(" *");
			}
		}
		
		printf("\n");
	}
	
	return 0;
}
