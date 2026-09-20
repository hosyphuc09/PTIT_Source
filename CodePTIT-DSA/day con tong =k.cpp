#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[100];
int x[100];
int d=0;
void in(int t){
	cout<<"[";
	for(int i=1;i<=t;i++){
		if(x[i]==1){
		 cout<<a[i];
		if(i!=t) cout<<" ";}
	}
	cout<<"] ";
}
void Try(int i,int sum){
	if(sum==m){
		d++;
		in(i-1);
		return;
	}
	if(sum>m||i>n) return;
	
	x[i]=1;
	Try(i+1,sum+a[i]);
	x[i]=0;
	Try(i+1,sum);
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a,a+n+1);
		d=0;
		Try(1,0);
		if(d==0) cout<<"-1"<<endl;
		cout<<endl;
	}
	return 0;
}
