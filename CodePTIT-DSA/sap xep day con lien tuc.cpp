#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		int l,k;
		bool f=false;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				k=i+1;
				f=true;
				break;
			}
		}
		bool r=false;
		for(int i=n-1;i>=0;i--){
			if(a[i]!=b[i]){
				l=i+1;
				r=true;
				break;
			}
		}
		cout<<k<<" "<<l<<endl;
	}
	return 0;
}

