#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
	
		int m=INT_MIN;
		int d=0;
		for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(a[j]>a[i]){
			d++;
			m=max(m,abs(a[j]-a[i]));}
		}
		}
		if(d==0) {
		cout<<"-1"<<endl;}
		if(d>0){
		
		cout<<m<<endl;}
	}
}
