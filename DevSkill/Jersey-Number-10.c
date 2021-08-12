#include<stdio.h>
#include<string.h>

int main()
{
	char team[51][5];
	int exp[100];
	char s_swp[10];
	int t,n,i,swp;

	scanf("%d",&t);

	while(t--){
		scanf("%d",&n);
		
		for(i=0;i<n;i++){
			scanf("%s",team[i]);
			scanf("%d",&exp[i]);		
		}
			
		//sorting	
		for(i=0;i<n-1;i++){
			
			if(exp[i]>exp[i+1]){
				swp=exp[i];
				exp[i]=exp[i+1];
				exp[i+1]=swp;					
				strcpy(s_swp,team[i]);
				strcpy(team[i],team[i+1]);
				strcpy(team[i+1],s_swp);		
			}
		
		}
			
			printf("%s\n",team[n-1]);		
	}

	
	return 0;
}
