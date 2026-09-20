#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100]={0};
bool chuaxet[100];
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void Try(int m){
	for(int i=1;i<=n;i++){
		if(chuaxet[i]){
			chuaxet[i]=false;
			a[m]=i;
			if(m==n){
				if(a[m]==k){
				in();}
			}
			else Try(m+1);
			chuaxet[i]=true;
		}
	}
}
int main(){
	memset(chuaxet,true,sizeof(chuaxet));
	cin>>n>>k;
	Try(1);
}
