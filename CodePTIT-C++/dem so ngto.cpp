#include <bits/stdc++.h>
using namespace std;
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		int dem =0;
		for(int i=a;i<=b;i++){
			if(nt(i)) dem++;
		}
		cout<<dem<<endl;
	}
}
