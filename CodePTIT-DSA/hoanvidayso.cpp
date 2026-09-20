#include <bits/stdc++.h>
using namespace std;
int n;
bool vs[105];
int b[105];
void in(){
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
}
void Try(int m,int a[]){
	for(int i=0;i<n;i++){
		if(!vs[i]){
			vs[i]=true;
			b[m]=a[i];
			if(m==n-1) in();
			else Try(m+1,a);
			vs[i]=false;
		}
	}
}
int main(){

	cin>>n;
	int a[n];
	set<int> res;
	for(int i=0;i<n;i++){
	int x;cin>>x;
	res.insert(x);
	}
	int d=0;
	for(auto x:res){
		a[d++]=x;
	}
	Try(0,a);
}
