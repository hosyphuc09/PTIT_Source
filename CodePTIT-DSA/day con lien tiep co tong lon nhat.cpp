#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long sum=a[0];
		long long maxx=a[0];
		for(int i=1;i<n;i++){
			sum=max((long long)a[i],sum+a[i]);
			maxx=max(maxx,sum);
		}
		cout<<maxx<<endl;
	}
	return 0;
}
