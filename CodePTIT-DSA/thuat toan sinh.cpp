#include <bits/stdc++.h>
using namespace std;
int a[11]={0},n;
bool check(int a[],int n){
	for(int i=1;i<=n/2;i++){
		if(a[i]!=a[n-i+1]) return false;
	}
	return true;
}
void result(){
	if(check(a,n)){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
}
void Try(){
	while(true){
		result();
		int i=n;
		while(a[i]==1){
			a[i]=0;
			i--;
		}
		if(i==0) break;
		else a[i]=1;
	}
}
int main(){
	cin>>n; 
	Try();
	return 0;
}
