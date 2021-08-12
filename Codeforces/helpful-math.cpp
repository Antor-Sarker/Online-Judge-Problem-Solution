#include<bits/stdc++.h>
using namespace std;
void re(string s);

int main(){
	
	string s;
	cin>>s;
	
	re(s);

}

void re(string s){
	
	int i,o=0,t=0,tr=0,cnt=0;
	
	for(i=0;s[i]!='\0';i++){
		if(s[i]=='+')
			continue;

		if(s[i]=='1')
			o++;

		else if(s[i]=='2')
			t++;
		else
			tr++;
	}

	for(i=1;i<=o;i++){
		cnt++;
		if(cnt==1)
			cout<<'1';
		else
			cout<<"+1";
	
	}

	for(i=1;i<=t;i++){
		cnt++;
		if(cnt==1)
			cout<<2;
		else
			cout<<"+2";
	}

	for(i=1;i<=tr;i++){
		cnt++;
		if(cnt==1)
			cout<<3;
		else
			cout<<"+3";
	}

	cout<<endl;

}

