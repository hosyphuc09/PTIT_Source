#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;

	vector<bool> k(256,false);
for(int i=0;i<s.size();i++){
	if(!k[s[i]]){
	cout<<s[i];
	int dem=0;
	for(int j=i;j<s.size();j++){
		if(s[i]==s[j]){
			dem++;
			k[s[j]]=true;
		}
	}
	cout<<dem;
}
		
	}
	cout<<endl;}
}
