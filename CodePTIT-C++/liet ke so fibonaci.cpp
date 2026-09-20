#include <bits/stdc++.h>
using namespace std;
int check(int n){
	int a[93];
	a[0]={0};
	a[1]={1};
	
	for(int i=2;i<=n;i++){
		a[i]=a[i-1]+a[i-2];
		if(i==n){
			return a[n];
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		for(int i=a;i<=b;i++){
			if(i==0) cout<<"0"<<" ";
			if(i==1) cout<<"1"<<" ";
			if(i>1){
			
				cout<<check(i)<<" ";
		}
		}
		cout<<endl;
	}
}
