#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t,p=0,top=0;
	char keyWord[51];
	char url[102][51];
	
	strcpy(url[0],"http://www.lightoj.com/");
	cin>>t;

	for(int i=1;i<=t;i++){
        p=0,top=0;
		
		cout<<"Case "<<i<<":"<<endl;
		keyWord[0]='0';

		while(keyWord[0]!='Q'){
			
			scanf("%s",keyWord);

			if(keyWord[0]=='V'){
				
				p++;
				scanf("%s",url[p]);
                cout<<url[p]<<endl;
				
                top=p;

			}
			else if(keyWord[0]=='B'){
				
				if(p==0) cout<<"Ignored"<<endl;
				else{
					p--;
					cout<<url[p]<<endl;
				}
			}

			else if(keyWord[0]=='F'){
				
				p++;
				if(p<=top) cout<<url[p]<<endl;

				else{
                    cout<<"Ignored"<<endl;
                	p--;
                }
			}
			

		}

	}


}



