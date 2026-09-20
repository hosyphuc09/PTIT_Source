#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[105];
void in(){
	int l=0,m=-1;
	for(int i=1;i<=n;i++){
		if(a[i]==1){
			l++;
			m=max(m,l);
		}
		if(a[i]==0){
			m=max(m,l);
			l=0;
		}
	}
	if(m>k){
		for(int i=1;i<=n;i++){
			cout<<a[i];
		}
		cout<<"\n";
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
	cin>>n>>k;
	Try(1);
	return 0;
}
