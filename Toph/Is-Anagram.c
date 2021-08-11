#include<stdio.h>
#include<string.h>
int main()
{
	int slen,sslen,i,j;
	int cnt=0;
	char s[100];
	char ss[100];
	
	scanf("%s",s);
	scanf("%s",ss);
	
	slen =strlen(s);
	sslen =strlen(ss);
	
	if(slen!=sslen){
		printf("No");
	}
	
	else{
		
		for(i=0;i<slen;i++){
			for(j=0;j<sslen;j++){
				
				if(s[i]==ss[j]){
					cnt++;
					ss[j]='0';
					break;
				}
			}
		}
	}
	
	if(cnt==slen){
		printf("Yes");
	}
	
	
	return 0;
}
