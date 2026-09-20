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
		int d=0,k=0;
		int l=0,q=0;;
		for(int i=0;i<n-1;i++){
			int m;
			if(a[i]<a[i+1]){
				d++;
			    q=d;
				k=0;
			}else if(q>0&&a[i+1]<a[i]){
			    m=d;
			    d=0;
				k++;
			}
			int y=k;
			l=max(l,m+y);
		}
		if(d==n-1) cout<<n<<endl;
		else cout<<l<<endl;
	}
	return 0;
}
