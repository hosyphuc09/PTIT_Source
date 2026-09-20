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
		int b[1000005]={0};
		bool f=false;
		for(int i=0;i<n;i++){
			b[a[i]]++;
			if(b[a[i]]==2) {
				cout<<a[i]<<endl;
				f=true;
				break;
			}
		}
		if(!f) cout<<"-1"<<endl;
	}
}
