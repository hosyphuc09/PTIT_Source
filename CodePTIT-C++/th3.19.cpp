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
		int d=-1;
		bool f=false;
		for(int i=0;i<n;i++){
			if(a[i]==k){
				d=i;
				f=true;
				break;
			}
		}
		cout<<d+1<<endl;
	}
}
