#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1005];
int d=0;
bool vs[105];
bool check(int n){
	if(n<2) return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}
void in(){
	if(check(d)){
		cout<<d<<": ";
	for(int i=1;i<=k;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
}
void Try(int m,int start){
	for(int i=start;i<=n;i++){
		a[m]=i;
		if(m==k){
			d++;
			in();
		} else Try(m+1,i+1);
	}
}
int main(){
	cin>>n>>k;
	Try(1,1);
}
