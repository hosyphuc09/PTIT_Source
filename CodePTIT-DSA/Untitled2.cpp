#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100]={0};
bool chuaxet[100];
void in(){
	if(a[n]==k){
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
void Try(int m){
	for(int i=1;i<=n;i++){
		if(!chuaxet[i]){
			chuaxet[i]=true;
			a[m]=i;
			if(m==n) in();
			else Try(m+1);
			chuaxet[i]=false;
		}
	}
}
int main(){
	cin>>n>>k;
	memset(chuaxet,false,sizeof(chuaxet));
	Try(1);
	return 0;
}
