#include<stdio.h>
int main(){

	int t,i,x,y,a,s,b,sum,z;
	scanf("%d",&t);
	
	for(i=1;i<=t;i++){
		scanf("%d%d",&a,&b);
		x=3+5+3+3+5;
		
		if(a>b){
			z=a-b;
			s=z+a;
			y=s*4;
			sum=x+y;
			printf("Case %d: %d\n",i,sum);
		}

		else{
			y=4*b;
			sum=x+y;
			printf("Case %d: %d\n",i,sum);
		}
	}

	return 0;
}
