#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
	 int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		bool f=false;
		for(int i=n-1;i>=0;i--){
			for(int j=0;j<i;j++){
				if(a[i]-a[j]==m){
					cout<<"1"<<endl;
					f=true;
					break;
				}
			}
		}
		if(!f) cout<<"-1";
	}
}
