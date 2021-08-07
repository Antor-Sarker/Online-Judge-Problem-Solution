#include<bits/stdc++.h>
using namespace std;
void count(long long w);

int main(){
	
    long long int w;
	int t;
    
    cin>>t;
    for(int i=1;i<=t;i++){
    	cin>>w;
        cout<<"Case "<<i<<":";
        count(w);
    }
        
}

void count(long long int w){
    long long int x;
    
    if(w%2!=0){
        cout<<" Impossible"<<endl;
        return;
    }
    
    for(long long int i=2;i<=w;i+=2){
        x = w/i;
        if(x*i!=w) continue;
        
        if(x%2!=0){
            cout<<" "<<x<<" "<<i<<endl;
            return;
        }
    }
    
     cout<<" Impossible"<<endl;

}



