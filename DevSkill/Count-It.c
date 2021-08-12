#define ONLINE_JUDGE 1
#include<stdio.h>

int main (){
	int i,j,k,t;
	char s[101];
	scanf("%d",&t);
	
	for(i=1;i<=t;i++){
		scanf(" %[^\n]",s);
		printf("Case %d:\n",i);
		
		for(j='a';j<='z';j++){
			
			int cnt = 0;
			for(k=0;s[k]!='\0';k++){
				if(j==s[k]){
					cnt++;
				}
			}
			
			if(cnt>0){
				printf("%c %d\n",j,cnt);
			}
		}
	}


	return 0;
}
