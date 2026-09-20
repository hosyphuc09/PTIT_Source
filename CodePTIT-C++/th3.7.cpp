#include <bits/stdc++.h>
using namespace std;
long long check(vector<int>&arr,int k){
	sort(arr.begin(),arr.end());
	long long count=0;
	int n=arr.size();
	int j=0;
	for(int i=0;i<n;i++){
		while(j<n&&arr[j]-arr[i]<k){
			j++;
		}
		count+=(j-i-1);
	}
	return count;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long r=check(a,k);
		cout<<r<<endl;
	}
	return 0;
}
