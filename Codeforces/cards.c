#include<stdio.h>
void cnt(char s[]);

int main(){
	int n;
	char s[100001];

	scanf("%d",&n);
	scanf("%s",s);

	cnt(s);



	return 0;
}


void cnt(char s[]){
	int z=0,e=0,r=0,o=0,n=0,i,x=0;
	
	for(i=0;s[i]!='\0';i++){
		
		if(s[i]=='z'){
			z++;
		}
		else if(s[i]=='e'){
			e++;
		}
		else if(s[i]=='r'){
			r++;
		}
		else if(s[i]=='o'){
			o++;
		}
		else{
			n++;
		}
	}


	if(n>0){
		printf("1");
		n--;
		x++;
	}

	while(n>0){
			printf(" 1");
			n--;
	}

	if(x==0){
		printf("0");
		z--;
	}

	while(z>0){
		printf(" 0");
		z--;
	}

	printf("\n");

	
}

