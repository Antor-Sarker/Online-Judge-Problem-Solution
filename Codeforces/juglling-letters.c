#include<stdio.h>
#include<stdlib.h>
int cnt(int a[],int n);

int main(){
	
	int t,n,x,i;
	int *a;
	char s[1001];

	scanf("%d",&t);
	while(t--){
		
		scanf("%d",&n);
		x = n;
		a = (int *) calloc(1001, sizeof(int));		
		
		while(n--){
			
			scanf("%s",s);
			
			for(i=0;s[i]!='\0';i++){
				a[s[i]]+=1;
			}

		}

		if(cnt(a,x)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
		

		//Free Memory
		free(a);
	
	}


	return 0;
}


int cnt(int a[],int n){

	int i;

	for(i=97;i<=122;i++){
		if(a[i]!=0){
			if((a[i]%n)!=0){
				return 0;
			}
		}
	}

	return 1;

}

