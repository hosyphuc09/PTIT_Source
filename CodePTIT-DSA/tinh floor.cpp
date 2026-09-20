#include <bits/stdc++.h>
using namespace std;
int Binary_seach(long long n,long long k,vector<long long>& a){
	long long l=0;
	long long r=n-1;
	int x=-1;
	while(l<=r){
		long long m=l+(r-l)/2;
		if(k>=a[m]){
			x=m;
			l=m+1;
			
		}
		else
			r=m-1;
			
		
	}
	if(x==-1) return -1;
	else return x+1;
}
int main(){
	int t;cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		vector<long long> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<Binary_seach(n,k,a)<<endl;
	}
	return 0;
}
