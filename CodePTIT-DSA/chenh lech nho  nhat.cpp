#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long m=1000000000;
		for(int i=0;i<n-1;i++){
			long long k=a[i+1]-a[i];
			if(k<m) m=k;
		}
		cout<<m<<endl;
	}
	return 0;
}
