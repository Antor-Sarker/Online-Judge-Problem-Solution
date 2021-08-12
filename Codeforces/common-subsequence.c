#include<stdio.h>
void sub(int a[], int b[],int m,int n);

int main(){
	int t,m,n,i;
	int a[1000];
	int b[1000];

	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&m,&n);

		for(i=0;i<m;i++){
			scanf("%d",&a[i]);
		}
		
		for(i=0;i<n;i++){
			scanf("%d",&b[i]);
		}

		sub(a,b,m,n);




	}


	return 0;
}

void sub(int a[],int b[],int m,int n){
	
	int i,j,x=0,y=0,c=0,num=10000000,count=0;
	
	for(i=y;i<m;i++){
		
		for(j=x;j<n;j++){
			
			if(a[i]==b[j]){
				c++;
				
				if(a[i]==1){
					count=1;
				}
				
				if(a[i]<num){
					num=a[i];
				}
				
				x=j+1;

				break;
			}
		}
	}

	

	if(num!=10000000){
		
		printf("YES\n");
		if(c==1 && count==1){
			printf("1 1\n");
		}
		else{
			printf("1 %d\n",num);
		}
	}
	else{
		printf("NO\n");
	}
}

