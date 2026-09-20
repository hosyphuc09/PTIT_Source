#include <bits/stdc++.h>
using namespace std;
int n;
vector<char> a;
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void Try(int m){
	for(int i=0;i<=1;i++){
		if(i==0){
			a[m]='A';
		}else{
			a[m]='B';
		}
		if(m==n) in();
		else Try(m+1);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		a.assign(n+1,' ');
		Try(1);
		cout<<endl;
	}
}

