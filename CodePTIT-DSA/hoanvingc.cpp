#include <bits/stdc++.h>
using namespace std;
int n;
int a[105];
bool vs[105];

void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void Try(int m){
	for(int i=n;i>=1;i--){
		if(!vs[i]){
			vs[i]=true;
			a[m]=i;
			if(m==n) in();
			else Try(m+1);
			vs[i]=false;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		Try(1);
	}
}
