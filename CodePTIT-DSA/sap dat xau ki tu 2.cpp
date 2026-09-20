#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int D;cin>>D;
		string s;
		cin>>s;
		int d=-1;
		int cnt[256]={0};
		for(char c:s){
			cnt[c]++;
		}
		int m=0; 
		for(int i=0;i<256;i++){
			if(cnt[i]>0) m++; 
			d=max(d,cnt[i]);
		}
		int n=s.size();
		
		if((d-1)*D+1<=n) cout<<"1"<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}
