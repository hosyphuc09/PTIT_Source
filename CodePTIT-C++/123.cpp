#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;cin>>n;
		int a[100],b[100];
		int l=0;
		while(n>0){
			a[l++]=n%10;
			n/=10;
		}
		int k,m=-1,f=0;
		for(long long i=l-1;i>=0;i--){
		b[f++]=a[i];
		}
		for(long long i=0;i<f;i++){
		if(b[i]==0){
			if(b[i+1]==8&&b[i+2]==4){
				m=i;break;
			}
		}
		}
		if(m==-1){
			for(long long i=0;i<f;i++) cout<<b[i]<<endl;
		}else{
		
		for(long long i=0;i<m;i++){
			cout<<b[i];
		}
		for(long long i=m+3;i<f;i++){
			cout<<b[i];
		}}
		cout<<endl;
	}
}