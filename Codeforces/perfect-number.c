#include<stdio.h>
int a[10000];


int check(int x){
	int q=x,s=0;
	while(q!=0){
		q=q/10;
		s+=(x%10);
		x=q;
	}
	if(s==10)
		return s;
	else
		return 0;
}

void make(){
	int c = 0,i;
	
	for(i=1;c<=10000;i=i+1){

		if(check(i)){
			c++;
			a[c] = i;
		}
	}

}

int main(){
	
	int n;

	scanf("%d",&n);

	make();
	printf("%d\n",a[n]);

	return 0;
}

