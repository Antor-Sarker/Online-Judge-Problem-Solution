#include<stdio.h>
int count(char s[]);

int main(){
	
	char s[1001];

	scanf(" %[^\n]",s);
	printf("%d\n",count(s));
	
	return 0;
}

int count(char s[]){
	
	int i,j,cnt=0;
	
	for(i='a';i<='z';i++){
		for(j=0;s[j]!='\0';j++){
			if(s[j]==i){
				cnt++;
				break;
			}
		}
	}
	
	return cnt;

}

