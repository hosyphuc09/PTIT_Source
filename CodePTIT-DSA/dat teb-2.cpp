#include <bits/stdc++.h>
using namespace std;
void khoitao(int m,int a[]){
	for(int i=0;i<m;i++){
		a[i]=i;
	}
}
void in(int m,int a[]){
	for(int i=0;i<m;i++){
		cout<<char('A'+a[i]);
	}
	cout<<endl;
}
void Try(int n,int m,int a[]){
	while(true){
		in(m,a);
		int i=m-1;
		while(a[i]==n-m+i) i--;
		if(i<0) break;
		else{
			a[i]++;
			for(int j=i+1;j<m;j++){
				a[j]=a[j-1]+1;
			}
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[20];
		khoitao(m,a);
		Try(n,m,a);
	}
}
