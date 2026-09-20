#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		map<long long,long long> m;
		long long r=0;
		for(int i=0;i<n;i++){
		long long x;
		cin>>x;
		long long d=k-x;
		if(m.count(d)){
			r+=m[d];
		}
		m[x]++;
		}
		cout<<r<<endl;
	}
	return 0;
}
