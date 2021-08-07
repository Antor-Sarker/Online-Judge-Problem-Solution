#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,n,sum,a;
    string s;

    cin>>t;
    for(int i=1;i<=t;i++){
        getline(cin,s);
        cin>>n;
        sum = 0;

        for(int j=1;j<=n;j++){
            cin>>a;
            if(a<0) continue;
            sum = sum + a;
        }

        cout<<"Case "<<i<<": "<<sum<<endl;
    }

}
