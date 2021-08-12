#include<stdio.h>
int cnt(int x);

int main(){
	
	int t,x,y;
	scanf("%d",&t);
	
	while(t--){

		scanf("%d%d",&x,&y);
		
		if(x<y){
			x^=y;
			y^=x;
			x^=y;

		}
		
		if(x==y){
			printf("0\n");
		}

		else{
			printf("%d\n",cnt(x-y));
		}
			

	}


	return 0;
}

int cnt(int x){
	int d=10,c=0;

	while(x!=0){
		
		if(x/d==0){
			d--;
		}
	
		else{
			c+= x/d;
			x = x-((x/d)*d);
		}

	}

	return c;
}

