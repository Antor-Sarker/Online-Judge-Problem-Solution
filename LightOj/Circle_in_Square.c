#include<stdio.h>
#include<math.h>

int main(){

    int t,i;
    double r,sq,sc,sd;

    scanf("%d",&t);
    
	for(i=1;i<=t;i++){
        scanf("%lf",&r);
        sq = (r+r) * (r+r);
        sc = 2*acos(0.0) * (r*r);
        sd = sq - sc;
        printf("Case %d: %.2lf\n",i,sd);
    }

}
