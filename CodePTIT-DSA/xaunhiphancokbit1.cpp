#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1005];
void in(){
	int d=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1) d++;
	}
	if(d==2){
		for(int i=1;i<=n;i++){
			cout<<a[i];
		}
		cout<<endl;
	}
}
void Try(int m){
	for(int i=0;i<=1;i++){
		a[m]=i;
		if(m==n) in();
		else Try(m+1);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		Try(1);
	}
}
