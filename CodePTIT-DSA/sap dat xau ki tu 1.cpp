#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		int d=-1;
		int cnt[256]={0};
		for(char c:s){
			cnt[c]++;
		}
		for(int i=0;i<256;i++){
			d=max(d,cnt[i]);
		}
		int l=(s.size()+1)/2;
		
		if(d<=l) cout<<"1"<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}
