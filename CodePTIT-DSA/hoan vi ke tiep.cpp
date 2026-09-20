#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> a(n);
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int r=n-1;
		while(r>0&&a[r]>a[r+1]) r--;
		if(r==0){
			reverse(a.begin(),a.end());
		}else{
			int j=n;
			while(a[r]>a[j]) j--;
			swap(a[r],a[j]);
			int l=r+1;
			int k=n;
			while(l<k){
				swap(a[l],a[k]);
				l++;
				k--;
			}
		}
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
