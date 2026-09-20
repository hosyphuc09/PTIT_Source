#include <bits/stdc++.h>
using namespace std;
bool check(int n,int a[]){
	int i=n-1;
	while(a[i]>a[i+1]) i--;
	if(i==0) return false;
	else{
		int j=n;
		while(a[j]<a[i]) j--;
		swap(a[i],a[j]);
		int l=i+1;
		int k=n;
		while(l<k){
			swap(a[l],a[k]);
			k--;
			l++;
		}
	}
	return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		int a[1001],n;
		cin>>n;
		for(int i=1;i<=n;i++){
		cin>>a[i];
		}
		if(check(n,a)){
			for(int i=1;i<=n;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}else{
			sort(a,a+n);
			for(int i=1;i<=n;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
	}
}
