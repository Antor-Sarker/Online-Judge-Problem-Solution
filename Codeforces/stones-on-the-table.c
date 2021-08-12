#include<stdio.h>
int main(){

	int n,i,j,cnt=0;
	char s[50];
	char check[3]="RGB";
	
	scanf("%d",&n);
	scanf("%s",s);

	for(i=0;i<3;i++){

		for(j=1;j<n;j++){
			if(check[i]==s[j] && s[j-1]==check[i]){
				cnt++;
			}
		}
		
	}

	printf("%d\n",cnt);



	return 0;
}
