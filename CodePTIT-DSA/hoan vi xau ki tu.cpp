#include <bits/stdc++.h>
using namespace std;
string a,b;
bool chuaxet[100];
void in(int n){
	for(int i=0;i<n;i++){
		cout<<b[i];
	}
	cout<<" ";
}
void Try(int m,int n){
	for(int i=0;i<n;i++){
		if(!chuaxet[i]){
			chuaxet[i]=true;
			b[m]=a[i];
			if(m==n-1) in(n);
			else Try(m+1,n);
			chuaxet[i]=false;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>a;
		int r=a.size();
		b.resize(r);
		memset(chuaxet,false,sizeof(chuaxet));
		Try(0,r);
		cout<<endl;
	}
	return 0;
}
