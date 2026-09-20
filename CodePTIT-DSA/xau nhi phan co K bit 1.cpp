#include <bits/stdc++.h>
using namespace std;
void in(int n,string &s){
	for(int i=1;i<=n;i++){
		cout<<s[i];
	}
	cout<<endl;
}
int check(int n,string s){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(s[i]=='1') dem++;
	}
	return dem;
}
void Try(int n,int m,string &s){
	while(true){
	if(check(n,s)==m){
		in(n,s);
	}
	int i=n;
	while(s[i]=='1'){
		s[i]='0';
		i--;
	}
	if(i==0) break;
	else{
		s[i]='1';
		
	}
}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		string s(n+1,'0');
		Try(n,m,s);
	}
	return 0;
}
