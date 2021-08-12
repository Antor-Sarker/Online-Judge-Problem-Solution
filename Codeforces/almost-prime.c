#include<stdio.h>
void make();
int check(int a);
int n[1501];

int main(){
	
	int x,i,cnt = 0;
	scanf("%d",&x);
	
	make();

	for(i=6;i<=x;i++){
		cnt +=check(i);
	}

	printf("%d\n",cnt);


	return 0;
}

void make(){
	int i,j;

	for(i=2;i*i<=1500;i++){
		if(n[i]==1)
			continue;
		for(j=2;i*j<=1500;j++){
			n[i*j] = 1;
		}
	}
}

int check(int a){

	int i,cnt=0;

	if(a%2==0){
		cnt++;
	}

	for(i=3;i<=1500;i+=2){
		if(n[i]==0){
			if(a%i==0)
				cnt++;
		}
	}

	if(cnt==2)
		return 1;
		
	else
		return 0;

}

