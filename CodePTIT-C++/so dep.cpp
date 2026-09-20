#include <bits/stdc++.h>
using namespace std;
int check(string  s){
	int n=s.length();
	for(int i=0;i<n;i++){
		if(s[i]%2!=0) return 0;
	}
	for(int i=0;i<n/2;i++){
		if(s[i]!=s[n-1-i]) return 0;
	}
	return 1;
}
int  main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(check(s)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
