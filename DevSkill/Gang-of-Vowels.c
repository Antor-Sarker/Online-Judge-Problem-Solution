#include<stdio.h>
int main()
{
	int i,n,j,t;
	char s[1001];
	scanf("%d",&t);
	for(j=1;j<=t;j++){
	scanf("%d",&n);

	scanf(" %[^\n]s",&s);
	int cnt=0;
	for(i=0;s[i]!='\0';i++){
		
		
		if((s[i]=='a') || (s[i]=='e') || (s[i]=='i') || (s[i]=='o') || (s[i]=='u')){
					if((s[i+1]!='a') && (s[i+1]!='e') && (s[i+1]!='i') && (s[i+1]!='o') && (s[i+1]!='u')){
			cnt++;
	}
	}
	}
	printf("Case %d: %d\n",j,cnt);
	}
	return 0;
}