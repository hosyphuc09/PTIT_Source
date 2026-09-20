#include <bits/stdc++.h>
using namespace std;
int n;
int a[105];
bool check(int n,int a[]){
	for(int i=1;i<=n/2;i++){
		if(a[i]!=a[n-i+1]) return false;
	}
	return true;
}
void in(){
	
	if(check(n,a)){
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
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
	cin>>n;
	Try(1); 
} 
