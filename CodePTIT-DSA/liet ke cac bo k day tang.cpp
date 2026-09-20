#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[20];
void Try(int m,int start){
	for(int i=start;i<=n;i++){
		a[m]=i;
		if(m==k){
			for(int t=1;t<=k;t++){
				cout<<a[t]<<" ";
			}
			cout<<endl;
		}else{
			Try(m+1,i);
		}
	}
}
int main(){
	cin>>n>>k;
	Try(1,1);
	return 0;
}
