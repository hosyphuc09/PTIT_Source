#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[1001];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int b[1001];
		int d=0;
		for(int i=n/2;i<n;i++){
			b[d++]=a[i];
		}
		sort(b,b+d,greater<int>());
		for(int i=0;i<n/2;i++){
			cout<<b[i]<<" "<<a[i]<<" ";
		}
		if(n%2!=0) cout<<b[d-1];
		cout<<endl;
	}
	return 0;
}
