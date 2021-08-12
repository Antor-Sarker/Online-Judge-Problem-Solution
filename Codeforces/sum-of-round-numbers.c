#include<stdio.h>
#include<math.h>
void f(int n);
int p(int b,int power);

int main(){

	int t,n;
	
	scanf("%d",&t);

	while(t--){
		scanf("%d",&n);
		f(n);
	}


	return 0;
}


void f(int n){
	int a[10];
	int cnt=0,i=0,x;
	
	while(n/10){
		cnt++;

		if(n%10){
			i++;
			
			a[i-1]=(n%10)*p(10,cnt);
		}
		
		n = n/10;

	}

	if(n%10){
		i++;
		cnt++;
		a[i-1] = (n%10)*p(10,cnt);
	}

	printf("%d\n",i);

	for(x=0;x<i-1;x++){
		printf("%d ",a[x]);
	}

	printf("%d\n",a[x]);


}

int p(int b,int power){
	
	int i,s=b;

	if(power==1){
		return power;
	}
	
	if(power==2){
		return 10;
	}

	for(i=3;i<power;i++){
		s*=10;
	}

	return s*b;

}

