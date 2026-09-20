#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n],d=0;
		for(int i=2;i*i<=n;i++){
			while(n%i==0){
				a[d++]=i;
				n/=i;
			}
		}
		if(n>1) a[d++]=n;
		if(d>=k) cout<<a[k-1]<<endl;
		if(d<k) cout<<"-1"<<endl;
	}
}
