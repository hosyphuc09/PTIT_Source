#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[100],x[100];
void in(){
	for(int i=1;i<=m;i++){
		cout<<a[x[i]]<<" ";
	}
	cout<<endl;
}
void Try(int i){
	for(int j=x[i-1]+1;j<=n-m+i;j++){
		x[i]=j;
		if(i==m) in();
		else Try(i+1);
	}
}
int main(){
    
    cin>>n>>m;
    set<int> s;
    
    int d=1;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	s.insert(a[i]);
	}
 n=s.size();
		
	for(auto x:s){
		a[d++]=x;
	}
	x[0]=0;
	Try(1);
}
