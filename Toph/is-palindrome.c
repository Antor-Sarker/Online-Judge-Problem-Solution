#include<stdio.h>
#include<string.h>
int main()
{
	int slen,i,j;
	char s[100];
	char ss[100];
	
	scanf("%s",s);
	slen=strlen(s);
	
	for(j=0,i=slen-1;i>=0;j++,i--){
		ss[j]=s[i];
	}
	
	if(strcmp(s,ss)==0){
		printf("Yes");
	}
	else{
		printf("No");
	}
	
	
	return 0;
}
