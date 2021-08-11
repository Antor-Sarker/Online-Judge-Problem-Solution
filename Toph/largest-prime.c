#include<stdio.h>
int n[10001];

void sive( ){

	int i,jsum,a;
	n[0]=0;
	n[1]=0;
	
	for(a=2;a<=10000;a++){
		n[a]=1;		
	}

	for(i=2;i<=10000;i++){
		if(n[i]==1){	
			for(jsum=i+i;jsum<=10000;jsum=jsum+i){
				n[jsum]=0;		
			}		
		}	
	}		
		
		
}


int main(){

	int t,i,j,a,b;
	
	sive();

	scanf("%d",&t);
	for(i=1;i<=t;i++){
				
		scanf("%d %d",&a,&b);
		int cnt=0;
		for(j=b;j>=a;j--){

			if(n[j]==1){
			    cnt=j;
				break;		
			}		
		
		}
		
		if(cnt==0){
			printf("-1\n");		
		}
		
		else{
			printf("%d\n",cnt);
	    }
	
	}
		
		
		
	return 0;		
}
