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
		long long d=0;
		for(int i=0;i<n-2;i++){
		int l=i+1;
		int r=n-1;
		while(l<r){
		long long sum=a[i]+a[l]+a[r];
		if(sum<k){
			d+=(r-l);
			l++;
		}else{
			r--;
		}
		}}
		cout<<d<<endl;
	}
	return 0;
}
