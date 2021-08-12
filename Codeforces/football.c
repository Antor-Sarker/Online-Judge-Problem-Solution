#include<stdio.h>
int check(char s[],char c);

int main(){

	char s[100];
	int i,cnt=0;
	char c=s[0];
	
	scanf("%s",s);

	if(check(s,'1')){
		printf("YES\n");
	}
	else if(check(s,'0')){
		printf("YES\n");
	}

	else{
		printf("NO\n");
	}


	return 0;
}

int check(char s[], char c){
		int i,cnt=0;

		for(i=0;s[i]!='\0';i++){
			if(s[i]==c){
				cnt++;
				if(cnt==7){
					return 1;
				}
			}
			else{
				cnt=0;
			}
		}

		return 0;
}

