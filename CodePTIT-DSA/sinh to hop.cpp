#include <bits/stdc++.h>
using namespace std;
int a[100];
void khoitao(int m){
	for(int i=1;i<=m;i++){
		a[i]=i;
	}
}
void in(int m){
	for(int i=1;i<=m;i++){
		cout<<a[i];
	}
	cout<<" ";
}
void Try(int n,int m){
	while(true){
		in(m);
		int i=m;
		while(a[i]==n-m+i) i--;
		if(i==0) break;
		else{
			a[i]++;
			for(int j=i+1;j<=m;j++){
				a[j]=a[j-1]+1;
			}
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		khoitao(m);
		Try(n,m);
		cout<<endl;
	}
	return 0;
}
