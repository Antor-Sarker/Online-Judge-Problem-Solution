#include<stdio.h>
#include<string.h>

int main(){
	
	int i,j,t,n;	
	char name[101][50];
	char skill[20];
	int rating[100];
	
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%d",&n);
		
		int big=0,b=0;
		for(j=0;j<n;j++){
			scanf("%s",name[j]);
			scanf("%d",&rating[j]);
			
			if(rating[j]>big){
				big=rating[j];
				b=j;
			}
			else if(big==rating[j]){
				if(name[b][0]>name[j][0]){
					b=j;
				}
			}
		}

			 if(rating[b]>=1 && rating[b]<=1199){
                strcpy(skill,"Newbie");     
            }
			else if(rating[b]>=1200 && rating[b]<=1399){
				strcpy(skill,"Pupil");		
			}
			      
			else if(rating[b]>=1400 && rating[b]<=1599){
                strcpy(skill,"Specialist");
            }
			else{
				strcpy(skill,"Expert");
			}

			printf("Case %d: %s is %s!.\n",i,name[b],skill);
			
	}

	return 0;		
}
