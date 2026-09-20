#include <bits/stdc++.h>
using namespace std;
void in(int n,string &s){
	for(int i=1;i<=n;i++){
		cout<<s[i];
	}
	cout<<endl;
}
bool check(int n,string s){
	for(int i=1;i<=n;i++){
		if(s[1]=='A'||s[n]=='H') return false;
		if(s[i]=='H'&&s[i+1]=='H') return false;
	}
	return true;
}
void Try(int n,string &s){
	while(true){
		if(check(n,s)){
	in(n,s);
}
	int i=n;
	while(s[i]=='H'){
		s[i]='A';
		i--;
	}
	if(i==0) break;
	else{
		s[i]='H';
	}
}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s(n+1,'A');
		Try(n,s);
	}
	return 0;
}
