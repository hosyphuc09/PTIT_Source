#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	if(!(cin>>n)) return 0;
	vector<long long> u(n),v(n);
	for(int i=0;i<n;i++){
		cin>>u[i]>>v[i];
		if(u[i]>v[i]) swap(u[i],v[i]);
	}
	int q;
	cin>>q;
	vector<long long> c(q);
	for(int i=0;i<q;i++){
		cin>>c[i];
	}
	sort(u.begin(),u.end());
	sort(v.begin(),v.end());
	for(int i=0;i<q;i++){
		long long curr=c[i];
		long long started=upper_bound(u.begin(),u.end(),curr)-u.begin();
		long long ended=lower_bound(v.begin(),v.end(),curr)-v.begin();
		cout<<started-ended<<"\n";
	}
	return 0;
}
