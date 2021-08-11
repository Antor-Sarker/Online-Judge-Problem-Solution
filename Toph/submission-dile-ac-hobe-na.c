#include<stdio.h>
int main()
{
	int m[100];
	int n[100];
	int i,j,k,l,nmbr;
	scanf("%d",&nmbr);
	
	//n1
	for(i=0;i<nmbr;i++){
		scanf("%d",&m[i]);
	}
	
	//n2
	for(j=0;j<nmbr;j++){
		scanf("%d",&n[j]);
	}
	
	//cnt
	int cnt=0;
	for(k=0;k<nmbr;k++){
		for(l=0;l<nmbr;l++){
			if(m[k]==n[l]){
				cnt++;
				break;
			}
		}
	}
	
	printf("%d",cnt);
	
	return 0;
}
