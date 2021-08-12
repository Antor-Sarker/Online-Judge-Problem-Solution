#include<stdio.h>
#include<string.h>

 int main(){

	int t,i,n,swp;
	char s[10][21];
	int goal[10];
	char s_swp[200];

	scanf("%d",&t);

	while(t--){
		scanf("%d",&n);
		
		for(i=0;i<n;i++){
			scanf("%s",s[i]);
			scanf("%d",&goal[i]);
		}
			
			
		//sorting				
		for(i=0;i<n-1;i++){
			
			if(goal[i]>goal[i+1]){
				swp= goal[i];
				goal[i]= goal[i+1];
				goal[i+1]= swp;
		
		
				strcpy(s_swp,s[i]);
				strcpy(s[i],s[i+1]);
				strcpy(s[i+1],s_swp);
			}
		
		}
			
 		printf("Winner: %c%s%c\n",92,s[n-1],47);
	}
	
	
	return 0;
}
