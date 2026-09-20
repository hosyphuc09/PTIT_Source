#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		vector<long long> a(n),b(m),c(k);
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];
		for(int i=0;i<k;i++) cin>>c[i];
		int i=0,j=0,l=0;
		vector<long long> res;
		while(i<n&&j<m&&l<k){
			if(a[i]==b[j]&&b[j]==c[l]){
				res.push_back(a[i]);
				i++;
				j++;
				l++;
			}
			else{
				long long mn=min({a[i],b[j],c[l]});
				if(a[i]==mn) i++;
				if(b[j]==mn) j++;
				if(c[l]==mn) l++;
			}
		}
		if(res.empty()) cout<<"NO\n";
		else {
			for(auto x:res) cout<<x<<" ";
			cout<<"\n";
		}
	}
}
