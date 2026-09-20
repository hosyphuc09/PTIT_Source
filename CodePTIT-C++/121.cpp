#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char,int> mp;
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
		}
		for(char m:mp){
			if(m.second==1) cout<<m.first;
		}
		cout<<endl;
	}
}
