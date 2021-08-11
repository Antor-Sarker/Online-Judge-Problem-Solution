#include<stdio.h>

void count(char s[]){
	int i,j,cnt;
	for(i=0;s[i]!='\0';i++){
		cnt=1;
		
		if(s[i]=='<'){
			continue;		
		}

		if(s[i]!='<'){
			printf("%c ",s[i]);		
		}

		for(j=i+1;s[j]!='\0';j++){
			if(s[i]==s[j]){
				s[j]='<';
				cnt++;		
			}			
		}
		printf("%d\n",cnt);

	}
}


int main(){
	char s[100001];
	int t,i;
	
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%s",s);
		printf("Case #%d:\n",i);
		count(s);
	}
		
	
	return 0;		
}
