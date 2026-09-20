#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int m=-1;
		for(int i=0;i<n;i++){
			if(a[i]<k) m=i;
			else break;
		}
		if(m==-1){
			cout<<"0"<<endl;
			continue;
		}
		int l=0;
		int r=m;
		int x;
		long long y=0;
		while(l<r){
			x=(a[r]-a[l]);
			if(x<k){
				y+=(r-l);
				l++;
			} else r--;
		}
		cout<<y<<endl;
	}
	return 0;
}
