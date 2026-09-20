#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		bool f=false;
		for(int i=0;i<n-2;i++){
			int l=i+1;
			int r=n-1;
			while(l<r){
				long long sum=a[i]+a[l]+a[r];
				if(sum==k){
	                f=true;
	                break;
				}else if(sum<k){
					l++;
				}
				else{
					r--;
				}
			}
			if(f) break;
		}
		if(f) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
