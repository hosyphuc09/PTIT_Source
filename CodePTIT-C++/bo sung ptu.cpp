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
		int l=*max_element(a,a+n);
		int m=*min_element(a,a+n);
		int d=0;
		for(int i=m;i<l;i++){
			bool f=false;
			for(int j=0;j<n;j++){
				if(i==a[j]){
					f=true;
					break;
				}
			}
			if(!f) {
				d++;
			}
		}
		cout<<d<<endl;
	}
}
