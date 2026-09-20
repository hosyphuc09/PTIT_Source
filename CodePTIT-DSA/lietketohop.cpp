#include <bits/stdc++.h>
using namespace std;
int n,k;
int b[105],a[105];
bool vs[105];
void in(){
	for(int i=1;i<=k;i++){
		cout<<a[b[i]]<<" ";
	}
	cout<<endl;
}
void Try(int m){
	for(int i=b[m-1]+1;i<=n-k+m;i++){
		b[m]=i;
		if(m==k) in();
		else Try(m+1);
	}
}
int main(){
	cin>>n>>k;

	set<int> res;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		res.insert(x);
	}
	int d=1;
	 n=res.size();
	for(auto x:res){
		a[d++]=x;
	}
	b[0]=0;
	Try(1);
}
