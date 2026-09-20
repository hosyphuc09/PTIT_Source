#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m,k;cin>>n>>m>>k;
		set<long long> a,b,c;
		for(int i=0;i<n;i++){
			long long x;cin>>x;
			a.insert(x);
		}
		for(int i=0;i<m;i++){
			long long y;cin>>y;
			if(a.count(y)) b.insert(y);
		}
		for(int i=0;i<k;i++){
			long long z;cin>>z;
			if(b.count(z)) c.insert(z);
		}
		if(!c.empty()){
			for(auto r:c){
				cout<<r<<" ";
			}
			cout<<endl;
		}else cout<<"NO"<<endl;
	}
	return 0;
}
