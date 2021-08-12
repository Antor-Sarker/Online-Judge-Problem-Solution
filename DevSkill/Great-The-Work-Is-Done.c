#include<stdio.h>
int main()
{
	int time,people,i,j;
	int d_time[100];
	
	while(scanf("%d%d",&time,&people)!=EOF){
		
		int cnt_h=0;
		
		for(i=0;i<people;i++){
			scanf("%d",&d_time[i]);
			cnt_h+=d_time[i];
		}
		
		if(cnt_h>=time){
			printf("Project will finish within 1 day.\n");
		}
		
		else{
			for(j=1; ;j++){
				
				if(time<=cnt_h*j){
					printf("Project will finish within %d days.\n",j);
					break;	
				}
			}
		}
	}


	return 0;
}
