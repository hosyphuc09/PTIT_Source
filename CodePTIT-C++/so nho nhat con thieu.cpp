#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n-1];
		for(int i=0;i<n-1;i++){
			cin>>a[i];
		}
		sort(a,a+(n-1));
		bool x=false;
		for(int i=1;i<=n;i++){
			bool y=false;
			for(int j=0;j<n;j++){
				if(i==a[j]){
					y=true;
					break;
				}
				}
				
				if(!y){
					cout<<i<<endl;
					x=true;
					break;
				
			}
		}
		if(!x){
			cout<<n+1<<endl;
		}
	}
}
