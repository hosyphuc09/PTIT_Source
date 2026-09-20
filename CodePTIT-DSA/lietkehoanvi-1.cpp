#include <bits/stdc++.h>
using namespace std;
int n;
int a[105]={0};
bool vs[105];
int d=0;
void in(){
	d++;
	cout<<d<<": ";
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void Try(int m){
	for(int i=1;i<=n;i++){
		if(!vs[i]){
			vs[i]=true;
			a[m]=i;
			if(m==n) in();
			else Try(m+1);
			vs[i]=false;
		}
	}
}
int main(){
	cin>>n;
	d=0;
	memset(vs,false,sizeof(vs));
	Try(1);
	return 0;
}
