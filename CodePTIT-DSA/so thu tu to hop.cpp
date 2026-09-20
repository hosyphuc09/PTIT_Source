#include <bits/stdc++.h>
using namespace std;
void khoitao(int m,int b[]){
	for(int i=0;i<m;i++){
		b[i]=i+1;
	}
}
bool check(int a[],int b[],int m){
	for(int i=0;i<m;i++){
		if(a[i]!=b[i]) return false;
	}
	return true;
}
void Try(int n,int m,int a[],int b[]){
	int d=0;
	while(true){
		d++;
		if(check(a,b,m)){
			cout<<d<<endl;
			return;
		}
		int i=m-1;
		while(b[i]==n-m+i+1) i--;
		if(i<0) break;
		else{
			b[i]++;
			for(int j=i+1;j<m;j++){
				b[j]=b[j-1]+1;
			}
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[20], b[20];
		for(int i=0;i<m;i++){
			cin>>a[i];
		}
		khoitao(m,b);
		Try(n,m,a,b);
	}
	return 0;
}
