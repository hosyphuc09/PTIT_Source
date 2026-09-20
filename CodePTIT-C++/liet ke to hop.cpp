#include <bits/stdc++.h>
using namespace std;
int n,k,X[100];
void ikq(){
	for(int i=1;i<=k;i++){
		cout<<X[i];
	}
	cout<<" ";
}
void Try(int i){
	for(int j=X[i-1]+1;j<=n-k+i;j++){
		X[i]=j;
		if(i==k){
			ikq();
		}else{
			Try(i+1);
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		Try(1);
		cout<<endl;
	}
}
