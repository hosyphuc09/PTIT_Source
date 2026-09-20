#include <bits/stdc++.h>
using namespace std;
int n;
int a[100]={0};
bool chuaxet[100];
int d=0;
void in(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}bool check(int n){
	if(n==0||n==1) return true;
	int a=0,b=1;
	while(b<n){
		int c=a+b;
		a=b;
		b=c;
	}
	return b==n;
}
void Try(int m){
	for(int i=1;i<=n;i++){
		if(chuaxet[i]){
			chuaxet[i]=false;
			a[m]=i;
			if(m==n){
			d++;if(check(d)==1){
			cout<<d<<": ";
				in();
			}}
			else Try(m+1);
			chuaxet[i]=true;
		}
	}
}
int main(){
	memset(chuaxet,true,sizeof(chuaxet));
	cin>>n;
	Try(1);
}
