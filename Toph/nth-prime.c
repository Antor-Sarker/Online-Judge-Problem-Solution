#include<stdio.h>
int s[7368790];

void sive( ){
	int i,jsum,x;
	for(x=2;x<7368790;x++){
		s[x]=0;		
	}

	for(i=2;i*i<=7368790;i++){
		if(s[i]==0){
			for(jsum=i+i;jsum<=7368790;jsum+=i){
				s[jsum]=1;		
			}		
		}		
			
	}	
}
int main(){
	int n,i;
	
	sive( );

	scanf("%d",&n);
	int cnt=0;
	
	for(i=2;i<7368790;i++){
		if(s[i]==0){
			cnt++;
			if(cnt==n){
				printf("%d\n",i);
				break;		
			}
		}
	}
	
		
	return 0;		
}
