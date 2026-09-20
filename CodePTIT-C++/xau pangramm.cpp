#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		int k;cin>>k;
		int l=0;
		bool f[26]={false};
		for(int i=0;i<s.size();i++){
			if(!f[s[i]-'a']){
				f[s[i]-'a']=true;
				l++;
			}
		}
		if((26-l)<=k){
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
}
