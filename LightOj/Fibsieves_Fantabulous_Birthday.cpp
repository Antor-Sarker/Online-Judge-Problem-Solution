#include<bits/stdc++.h>
using namespace std;
void prnt(long long int s);

int main(){

    int t;
    long long int s;

    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>s;
        cout<<"Case "<<i<<": ";
        prnt(s);
    }

}

void prnt(long long int s){

    double b = sqrt(s);
    long long int base = b;
    long long int start=0,end=0,mid=0,r,c;


    if((base*base)<s) base++;
    else{
        if(s%2==0){
            cout<<base<<" "<<1<<endl;
        }

        else{
            cout<<1<<" "<<base<<endl;
        }

        return;
    }

    start = (base-1)*(base-1) + 1;
    end = base * base;
    mid = (start + end)/2;

    if(s==mid){
        r = (end-mid)+1;
        cout<<r<<" "<<r<<endl;
        return;
    }

    else if(end%2==0){
        if(s>mid){
            r = (end-s)+1;
            cout<<base<<" "<<r<<endl;
            return;
        }

        else{
            c = base - (mid-s);
            cout<<c<<" "<<base<<endl;
            return;
        }
    }
    
	else{
        if(s<=mid){
            c = base;
            r = base - (mid - s);
        }
        else{
            r = base;
            c = (end - s)+1;
        }

        cout<<c<<" "<<r<<endl;
    }


}
