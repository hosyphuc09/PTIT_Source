#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
void Try(int m){
	for(int i=n-k+m;i>=a[m-1]+1;i--){
		a[m]=i;
		if(m==k){
			for(int j=1;j<=k;j++){
				cout<<a[j]<<" ";
			}
			cout<<endl;
		}else Try(m+1);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		a[0]=0;
		Try(1);
	}
	return 0;
}
