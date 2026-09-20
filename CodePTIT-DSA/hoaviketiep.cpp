#include <bits/stdc++.h>
using namespace std;
bool check(int n,int a[]){
	int i=n-1;
	while(a[i]>a[i+1]) i--;
	if(i==0) return true;
	else{
		int j=n;
		while(a[j]<a[i]) j--;
		swap(a[i],a[j]);
		j=i+1;
		int k=n;
		while(j<k){
			swap(a[i],a[k]);
			j++;
			k--;
		}
	}
	return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[1005];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		if(check(n,a)){
			for(int i=1;i<=n;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}else {
			for(int i=1;i<=n;i++){
				cout<<i<<" ";
			}
			cout<<endl;
		}
	}
}
