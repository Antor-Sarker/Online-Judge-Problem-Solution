#include<stdio.h>

void f(int n){
	if(n%20==0){
		printf("Yes\n");
	}
	else{
     printf("No\n");
	}
}

int main()
{

	int t,i,cnt;
	char s[100];

	scanf("%d",&t);

	while(t--){
		scanf(" %[^\n]s",s);
		cnt=0;
	
		for(i=0;s[i]!='\0';i++){
			cnt +=s[i];
		}

	//
	f(cnt);
	
	}

	return 0;
}
