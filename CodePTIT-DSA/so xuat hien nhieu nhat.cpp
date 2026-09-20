#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int r=n/2;
		vector<long long> a(n);
		map<long long,long long> m;
		for(int i=0;i<n;i++){
			cin>>a[i];
			m[a[i]]++;
		}
		
		long long k=0;
		int x;
		for(int i=0;i<n;i++){
			if(m[a[i]]>k){
				x=i;
			 k=m[a[i]];
		}}
		if(k>r) cout<<a[x]<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
