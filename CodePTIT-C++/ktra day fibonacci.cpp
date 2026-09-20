#include <bits/stdc++.h>
using namespace std;

int check(int n){
	if(n==1||n==0) return 1;
	int a=1;
	int b=1;
	while(b<n){
		int t=b;
		b=a+b;
		a=t;
	}
	return b==n;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(check(a[i])){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
}
