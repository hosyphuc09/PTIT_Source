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
		bool f=false;
		int k=a[0];
		for(int i=0;i<n;i++){
			if(a[i]>k){
				cout<<k<<" "<<a[i]<<endl;;
				f=true;
				break;
			}
		}
		if(!f){
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
