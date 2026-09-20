#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,x;cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			
		}
		bool f=false;
		for(int i=0;i<n;i++){
			if(a[i]==x){
				cout<<"1"<<endl;
				f=true;
				break;
			
			}
		}
		if(!f) cout<<"-1"<<endl;
	}
}
