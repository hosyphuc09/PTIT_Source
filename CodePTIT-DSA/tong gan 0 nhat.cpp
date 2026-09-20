#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int k=abs(a[0]+a[1]);
		int x,y;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				int l=abs(a[i]+a[j]);
				if(l<k){
					k=l;
					x=i;
					y=j;
				}
			}
		}
		cout<<a[x]+a[y]<<endl;
	}
	return 0;
}
