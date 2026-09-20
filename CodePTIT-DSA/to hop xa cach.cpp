#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[105]={0};
void in(){
	int sum=0;
	for(int i=1;i<k;i++){
		sum+=(a[i+1]-a[i]);
	}
	if(sum>k){
		for(int i=1;i<=k;i++){
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
}
void Try(int m){
	for(int i=a[m-1]+1;i<=n-k+m;i++){
		a[m]=i;
		if(m==k) in();
		else Try(m+1);
	}
}
int main(){
	cin>>n>>k;
	Try(1);
	return 0;
}
