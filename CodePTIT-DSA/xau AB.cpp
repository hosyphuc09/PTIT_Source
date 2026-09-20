#include <bits/stdc++.h>
using namespace std;
void in(int n,string &s){
	for(int i=1;i<=n;i++){
		cout<<s[i];
	}
	cout<<endl;
}

void Try(int n,int k,string &s){
	int d=0;
	while(true){
		d++;
		if(d>1&&d!=k){
		in(n,s);}
		int i=n;
		while(s[i]=='B'){
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
	int n;cin>>n;
	int k=pow(2,n);
	string s(n+1,'A');
	Try(n,k,s);
	return 0;
}
