#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int n=s.size();string res=" ";
		for(int i=0;i<n;i++){
			int l=i,r=i;
			while(l>=0&&r<n&&s[l]==s[r]){
				int len=r-l+1;
				if(len>res.size()) res=s.substr(l,len);
				l--;r++;
			}
		}
		if(res.empty()){
		 cout<<"No"<<endl;}
		 else{
		 	cout<<"Yes"<<endl;
		 }
		
	}
}
