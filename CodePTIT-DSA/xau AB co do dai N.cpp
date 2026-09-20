#include <bits/stdc++.h>
using namespace std;
void in(int n,string &s){
	for(int i=1;i<=n;i++){
		cout<<s[i];
	}
	cout<<" ";
}
void khoitao(int n,string &s){
	for(int i=1;i<=n;i++){
		s[i]='A';
	}
}
void Try(int n,string &s){
	while(true){
		in(n,s);
		int i=n;
		while(i>=1&&s[i]=='B'){
			s[i]='A';
			i--;
		}
		if(i==0) break;
		else{
			s[i]='B';
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s(n+1,'A');
		khoitao(n,s);
		Try(n,s);
		cout<<endl;
	}
	return 0;
}
