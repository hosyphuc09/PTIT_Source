#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		set<int> h,g;
		int d=0;
		
		
		for(int i=0;i<n;i++){
			h.insert(a[i]);
			if(i<m){
				h.insert(b[i]);
			}
		}
		for(int x:h){
			cout<<x<<" ";
		}
		cout<<endl;
		sort(b,b+m);
		for(int i=0;i<n;i++){
			if(binary_search(b,b+m,a[i])){
				g.insert(a[i]);
			}
		}
		for(int z:g){
			cout<<z<<" ";
		}
		cout<<endl;
	}
}
