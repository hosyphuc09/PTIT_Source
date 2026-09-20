#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[25];
void Try(int i,int start){
	for(int j=start;j>=i;j--){
		a[i]=j;
		if(i==k){
			for(int t=1;t<=k;t++){
				cout<<a[t]<<" ";
				
			}
			cout<<endl;
		}else{
			 Try(i+1,j-1);
		}
	}
}
int main(){
	int T;cin>>T;
	while(T--){
		cin>>n>>k;
		Try(1,n);
	}
	return 0;
}
