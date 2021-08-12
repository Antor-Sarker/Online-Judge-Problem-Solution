#include<stdio.h>
int a[100];

void sort(int a[],int n);
void print(int a[],int n);


int main(){
	int n,i;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	sort(a,n);
	print(a,n);

	return 0;
}

void sort(int a[],int n){
	int i,j,min_index;

	for(i=0;i<n-1;i++){
		
		min_index = i;

		for(j=i+1;j<n;j++){
			
			if(a[j]<a[min_index]){
				min_index = j; 	
			}
		}

		if(min_index != i){
			a[min_index] ^=a[i];
			a[i] ^=a[min_index];
			a[min_index] ^=a[i];
		}
	}
	
}
	void print(int a[],int n){
		
		int i;

		for(i=0;i<n-1;i++){
			printf("%d ",a[i]);
		}
		
		printf("%d\n",a[i]);

	}

