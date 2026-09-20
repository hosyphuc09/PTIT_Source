#include <bits/stdc++.h>
using namespace std;
int n,k,a[105];
int x[100];
int d=0;
void in(int t){
	for(int i=1;i<=t;i++){
		if(x[i]==1){
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
}
void Try(int m,int sum){
	if(sum==k){
		in(m-1);
		d++;
		return;
	}
	if(m>n||sum>k) return;
	x[m]=0;
	Try(m+1,sum);
	x[m]=1;
	Try(m+1,sum+a[m]);
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	Try(1,0);
	cout<<d<<endl;
}
