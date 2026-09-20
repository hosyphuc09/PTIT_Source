#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int d=0;
		bool f=false;
		for(int i=0;i<n;i++){
			if(a[i]==m) d++;
			f=true;
		}if(d>0){
		
		cout<<d<<endl;
		
	}else if(d==0){
		cout<<"-1"<<endl;
	}}
}
