#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;
		long long k;
		cin>>n>>m>>k;
		int a[n],b[m];
		vector<int> c;
		for(int i=0;i<n;i++){
			cin>>a[i];
			c.push_back(a[i]);
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
			c.push_back(b[i]);
		}
		stable_sort(c.begin(),c.end());
		cout<<c[k-1]<<endl;
	}
	return 0;
}
