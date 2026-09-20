#include <bits/stdc++.h>
using namespace std;
bool check(int n,int m,int a[]){
	int i=m;
	while(a[i]==n-m+i) i--;
	if(i==0 ) return false;
	else{
		a[i]++;
		for(int j=i+1;j<=m;j++){
			a[j]=a[j-1]+1;
		}
	}
	return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[1001];
		for(int i=1;i<=m;i++){
			cin>>a[i];
		}
		if(check(n,m,a)){
			for(int i=1;i<=m;i++){
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}else{
			for(int i=1;i<=m;i++){
				cout<<i<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
