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
		k=min(k,n-k);
		long long x=0,y=0;
		for(int i=0;i<n;i++){
			if(i<k){
				x+=a[i];
			}else{
				y+=a[i];
			}
		}
		cout<<y-x<<endl;
	}
	return 0;
}
