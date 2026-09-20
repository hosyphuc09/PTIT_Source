#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int d=0;
		for(int i=0;i<n;i++){
			if(a[i]==m) d++;
		}
		if(d>0){
			cout<<d<<endl;
		}else{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
