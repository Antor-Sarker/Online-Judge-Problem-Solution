#include<stdio.h>
void sf(char s[],int n){

	int i,j,cnt,cm=0;
	for(i=97;i<=122;i++){
		cnt = 0;
		
		for(j=0;j<n;j++){
			if(i==s[j]){
				cnt++;
			}
		}
		
		if(cnt>0){
			cm++;
			printf("%c - %d\n",i,cnt);
		}
		
	}
	
	if(cm==0){
		printf("-1\n");
	}
	
}

int main(){

	int t,n,i;
	char s[1001];
	
	scanf("%d\n",&t);
	for(i=1;i<=t;i++){
		
		scanf("%d\n",&n);
		scanf(" %[^\n]s",s);
		printf("Case %d:\n",i);
		sf(s,n);
		printf("\n");
	}
	
	
	return 0;
}
