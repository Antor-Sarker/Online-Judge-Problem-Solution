#include<stdio.h>
#include<string.h>

int main(){

	int temp,t,n,a,b,i,x;
	char fn[20][51];
	int fm[20];
	scanf("%d\n",&t);
	
	for(x=1;x<=t;x++){
	
		scanf("%d\n",&n);
		for(i=0;i<n;i++){
			scanf("%s",fn[i]);
			scanf("%d\n",&fm[i]);
		}
	
		char tempp[55];
		
		//sorting number
		for(a=0;a<n-1;a++){
			for(b=0;b<n-1-a;b++){
				if(fm[b]>fm[b+1]){
					
					temp=fm[b];
					strcpy(tempp,fn[b]);
					fm[b]=fm[b+1];
					strcpy(fn[b],fn[b+1]);
					fm[b+1]=temp;
					strcpy(fn[b+1],tempp);
				}
			}
		}
		
		printf("%s %s\n",fn[n-1],fn[0]);
		
	}
	
	
	return 0;
}
