#include<stdio.h>
int main()
{
	int poltu,i,j,n,t,x,a,b,temp;
	int line[25];
	scanf("%d\n",&t);
	
	for(i=1;i<=t;i++){
		scanf("%d\n",&n);
		for(j=0;j<n;j++){
			scanf("%d\n",&line[j]);
		}	
		scanf("%d",&poltu);	
		
		//sorting
		for(a=0;a<n-1;a++){
			for(b=0;b<n-1;b++){
				if(line[b]>line[b+1]){
					temp=line[b];
					line[b]=line[b+1];
					line[b+1]=temp;
				}
			}
		}
		
				
		for(x=0;x<n;x++){
			if(line[x]>poltu){
				printf("Case %d: %d %d\n",i,line[x],line[x+1]);
				break;
			}	
		}
		
		
 		
	}
	
	
	return 0;
}
