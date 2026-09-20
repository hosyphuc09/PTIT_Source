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
		int lmin[n],rmax[n];
		lmin[0]=a[0];
		rmax[n-1]=a[n-1];
		for(int i=1;i<n;i++){
			lmin[i]=min(lmin[i-1],a[i]);
		}
		for(int i=n-2;i>=0;i--){
			rmax[i]=max(rmax[i+1],a[i]);
		}
		int i=0,j=0;
		long long d=-1;
		while(i<n&&j<n){
			if(lmin[i]<rmax[j])
			{
				d= max(d, (long long)j-i);
				j++;
			}else i++;
		}
		cout<<d<<endl;
	}
}
