#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int d=0;
		sort(a,a+n);
		for(int i=a[0];i<a[n-1];i++){
		if((a[i+1]-a[i])>1){
			for( int j=a[i]+1;j<a[i+1];j++){
				if(j%2==0) cout<<j<<" ";d++;
			}
		}}
			if(d==0) cout<<"Yes"<<endl;
		
		cout<<endl;
	}
}
