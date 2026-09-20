#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		sort(s.begin(),s.end());
		int d=0,sum=0;
		int a[s.size()];
		for(int i=0;i<s.size();i++){
			if(s[i]>='0'&&s[i]<='9'){
			 a[d++]=s[i]; 
			 sum+=s[i]-'0';
		}
	}
	for(int i=d;i<s.size();i++){
		cout<<s[i];
	}
	cout<<sum<<endl;
}}
