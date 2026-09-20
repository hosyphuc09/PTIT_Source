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
		sort(a,a+n);
		int k=0;
		for(int i=0;i<n;i++){
			int r=a[i+1]-a[i];
			if(r>1) k+=r-1;
		}
		cout<<k<<endl;
	}
	return 0;
}
