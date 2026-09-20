#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		int le=0,chan=0;
		for(int i=0;i<s.size();i++){
			if(i%2==0){
				chan+=s[i]-'0';
			}
			if(i%2==1){
				le+=s[i]-'0';
			}
			
		}
		int hieu=le-chan;
		if(hieu%11==0){
			cout<<"1"<<endl;
		}else
		{
			cout<<"0"<<endl;
		}
	}
}
