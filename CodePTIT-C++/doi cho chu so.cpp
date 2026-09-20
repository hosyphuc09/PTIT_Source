#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s[0]==0-'0'){
			cout<<"-1"<<endl;
			continue;
		}
		bool f=false;
		for(int i=s.size()-1;i>0;i--){
			if(s[i]<s[i-1]){
				swap(s[i],s[i-1]);
				f=true;
				break;
			}
		}
		if(!f) {
			cout<<"-1"<<endl;
		}else{
		
		for(int i=0;i<s.size();i++){
			cout<<s[i];
		}}
		cout<<endl;
	}
}
