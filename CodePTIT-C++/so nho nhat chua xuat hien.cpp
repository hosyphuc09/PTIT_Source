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
		sort(a,a+n);
		bool x=false;
		for(int i=1;i<a[n-1];i++){
		bool check=false;
		for(int j=0;j<n;j++){
			if(i==a[j]){
				check=true;
				break;
			}
		}
	if(!check){
	 cout<<i<<endl;
	x=true;
	break;
	}	
	}
	if(!x) cout<<n+1<<endl;
}

}
