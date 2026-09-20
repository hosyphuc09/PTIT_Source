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
		int d=0;
		for(int i=0;i<n-1;i++){
			int k=i;
			for(int j=i+1;j<n;j++){
				if(a[k]>a[j]){
					k=j;
				}
			}
			int l=a[i];
			swap(a[i],a[k]);
			if(a[i]!=l) d++;
		}
		cout<<d<<endl;
	}
	return 0;
}
