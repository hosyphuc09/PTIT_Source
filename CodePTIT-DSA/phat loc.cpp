#include <bits/stdc++.h>
using namespace std;
void in(int n,string &s){
	for(int i=1;i<=n;i++){
		cout<<s[i];
	}
	cout<<endl;
}
bool check(int n,string s){
	if(s[1]!='8'||s[n]!='6') return false;
	int d=0;
	for(int i=1;i<=n;i++){
		if(s[i]=='8'&&i<n){
			if(s[i+1]=='8') return false;
		}
	if(s[i]=='6'){
		d++;
		if(d>3) return false;
	}else{
		d=0;
	}
	}
	return true;
}
void Try(int n,string &s){
	while(true){
		if(check(n,s)){
		in(n,s);
    }
		int i=n;
		while(s[i]=='8'){
			s[i]='6';
			i--;
		}
		if(i==0) break;
		else{
			s[i]='8';
		}
	}
}
int main(){
	int n;cin>>n;
	string s(n+1,'6');
	Try(n,s);
	return 0;
}
