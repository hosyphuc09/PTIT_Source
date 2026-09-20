#include <bits/stdc++.h>
using namespace std;
int n,X[100];
void ikq(){
	for(int i=1;i<=n;i++){
		cout<<X[i];
	}
	cout<<" ";
}
void Try(int i){
	for(int j=0;j<=1;j++){
		X[i]=j;
		if(i==n){
			ikq();
		}else{
			Try(i+1);
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		
		cin>>n;
		Try(1);
		cout<<endl;
	}
}
