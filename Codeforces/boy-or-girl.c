#include<stdio.h>
int check(char s[]);

int main(){

	char name[100];
	scanf("%s",name);

	if(check(name)){
		printf("IGNORE HIM!\n");
	}
	else{
		printf("CHAT WITH HER!\n");
	}


	return 0;
}

int check(char s[]){
	int j,cnt = 0;
	char i;

	for(i='a';i<='z';i++){
		for(j=0;s[j]!='\0';j++){
			if(i==s[j]){
				cnt++;
				break;
			}
		}
	}

	if(cnt%2==0){
		return 0;
	}
	else{
		return 1;
	}


}



