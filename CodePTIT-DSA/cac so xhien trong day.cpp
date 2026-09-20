#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		long long a[n];
		set<int> s;
		for(long long i=0;i<n;i++){
			cin>>a[i];
			while(a[i]>0){
				int r=a[i]%10;
				s.insert(r);
				a[i]/=10;
			}
		}
		for(auto x:s){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}
