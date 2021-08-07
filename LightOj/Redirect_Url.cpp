#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    char s[101];
    
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>s;
        cout<<"Case "<<i<<": ";
        if(s[4]=='s'){
            cout<<s<<endl;
        }
        else{
            cout<<"https://";
            for(int i=7;s[i]!='\0';i++){
                cout<<s[i];
            }
            cout<<endl;
        }

    }
     
}
