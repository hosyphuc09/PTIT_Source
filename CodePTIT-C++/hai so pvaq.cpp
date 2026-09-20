#include <bits/stdc++.h>
using namespace std;
long long check(long long a,long long b){
	while(b){
		long long t=a%b;
		a=b;
		b=t;	
		}
		return a;
}
int main(){
	int t;cin>>t;
	while(t--){
		long long a,x,y;
		cin>>a>>x>>y;
		long long g=check(x,y);
		for(int i=0;i<g;i++){
			cout<<a;
		}
		cout<<endl;
	}
}
