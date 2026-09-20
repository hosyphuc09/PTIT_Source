#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		map<long long,long long> m;
		long long d=0;
		for(int i=0;i<n;i++){
			long long x;
			cin>>x;
			long long r=k-x;
			if(m.count(r)){
				d+=m[r];
			}
			m[x]++;
		}
		cout<<d<<endl;
	}
	return 0;
}
