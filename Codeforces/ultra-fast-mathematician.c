#include<stdio.h>
int main(){

	char a[101];
	char b[101];
	int x,y,i;

	scanf("%s",a);
	scanf("%s",b);
	
	for(i=0;a[i]!='\0';i++){
		x = a[i]-'0';
		y = b[i]-'0';

		printf("%d", x ^ y);
	}
	
	printf("\n");

	return 0;
}

