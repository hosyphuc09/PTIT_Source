#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;cin>>n;
		int a[100];
		int l=0;
		while(n>0){
			a[l++]=n%10;
			n/=10;
		}
		int k,m;
		for(int i=0;i<l;i++){
			k=a[i];
			a[i]=a[l-1-i];
			a[l-1-i]=a[i];
		}
		for(int i=1;i<=l;i++){
		if(a[i]==0){
			if(a[i+1]==8&&a[i+2]==4){
				m=i;
			}
		}
		}
		for(int i=1;i<m;i++){
			cout<<a[i];
		}
		for(int i=m+3;i<=l-1;i++){
			cout<<a[i];
		}
	}
}
