#include <bits/stdc++.h>
using namespace std;
bool check(string &s){
	int i=s.size()-1;
	while(i>=0&&s[i]=='1'){
		s[i]='0';
		i--;
	}
	if(i<0) return false; 
	else {
	
		s[i]='1';
	}
	return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		if(check(s)){
			for(auto x:s){
				cout<<x;
			}
			cout<<endl;
		}else {
			for(int i=1;i<=s.size();i++){
				cout<<0;
			}
			cout<<endl;
		}
	}
}
