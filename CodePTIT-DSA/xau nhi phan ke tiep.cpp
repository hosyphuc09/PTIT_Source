#include <bits/stdc++.h>
using namespace std;
bool check(string &s){
	int i=s.size()-1;
	while(s[i]=='1'){
		s[i]='0';
		i--;
	}
	if(i<0) return false;
	else{
		s[i]='1';
	}
	return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(check(s)){
			for(int i=0;i<s.size();i++){
				cout<<s[i];
			}
			cout<<endl;
		}else{
			for(int i=0;i<s.size();i++){
				cout<<"0";
			}
			cout<<endl;
		}
	}
	return 0;
}
