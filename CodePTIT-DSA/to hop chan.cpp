#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
bool check(int n,int a[]){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	if(sum%2!=0) return false;
	return true;
}
void khoitao(){
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
}
void in(){
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void Try(int m){
	for(int i=a[m-1]+1;i<=n-k+m;i++){
		a[m]=i;
		if(m==k){
			if(check(n,a)){
				in();
			}
		}
		else Try(m+1);
	}
}
int main(){
	cin>>n>>k;
	
	Try(1);
	return 0;
}
