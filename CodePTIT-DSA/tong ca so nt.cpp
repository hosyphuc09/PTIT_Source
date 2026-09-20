#include <bits/stdc++.h>
using namespace std;
int check(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int x,y;
		bool f=false;
		int d=0;
		for(int i=1;i<=n/2;i++){
			if(check(i)) x=i;
			if(check(n-1-i)) y=n-1-i;
			if(x+y==n){
				cout<<x<<" "<<y<<endl;
				d++;
				f=true;
				break;
			}
		}
		if(d==0) cout<<"-1"<<endl;
	}
	return 0;
}
