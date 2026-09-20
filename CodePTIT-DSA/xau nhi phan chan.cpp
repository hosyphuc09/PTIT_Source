#include <bits/stdc++.h>
using namespace std;
void in(int n,string &s){
	for(int i=1;i<=n;i++){
		cout<<s[i]<<" ";
	}
	cout<<endl;
}
bool check(string s){
	int d=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='1') d++;
	}
	if(d%2!=0) return false;
	return true;
}
void Try(int n,string &s){
	while(true){
		if(check(s)){
		in(n,s);}
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
	int n;cin>>n;
	string s(n+1,'0');
	Try(n,s);
	return 0;
}
