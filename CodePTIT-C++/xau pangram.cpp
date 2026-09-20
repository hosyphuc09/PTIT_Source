#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		int k;cin>>k;
		
		if(s.size()<26){
			cout<<"0"<<endl;
			continue;
		}
		int f[26]={0};
		for(char ch : s){
			char c=ch;
			if(c>='A'&&c<='Z') c=c-'A'+'a';
			if(c>='a'&&c<='z') f[c-'a']=1;
		}
		int m=0;
		for(int i=0;i<26;i++){
			if(f[i]==0) m++;
		}
		cout<<m(k>=m?1:0)<<endl;
	}
}
