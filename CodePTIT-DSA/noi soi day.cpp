#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<long long> a;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			a.push_back(x);
		}
		sort(a.begin(),a.end());
		long long k=a[0];
		long long sum=0;
		for(int i=1;i<a.size();i++){
			long long m=k+a[i];
			sum+=m;
			k=m;
			a.push_back(m);
			
			sort(a.begin(),a.end());
		}
		cout<<sum<<endl;
	}
	return 0;
}
