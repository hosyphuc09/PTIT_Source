#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
bool check(int n){
	if(n==0||n==1) return true;
	int a=0,b=1;
	while(b<n){
		int c=a+b;
		a=b;
		b=c;
	}
	return b==n;
}
void in(){
	int sum=0;
	for(int i=1;i<=k;i++){
		sum+=a[i];
	}
	if(check(sum)==1){
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}}
void Try(int m){
	for(int i=a[m-1]+1;i<=n-k+m;i++){
		a[m]=i;
		if(m==k)in();
		else Try(m+1);
	}
}
int main(){
	cin>>n>>k;
	
	Try(1);
	return 0;
}
