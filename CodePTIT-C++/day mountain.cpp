#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,l,q;cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cin>>l>>q;
		int k;
		bool x=false,y=false;
		bool ok=true;
		for(int i=l;i<q;i++){
			if(a[i+1]>a[i]){
				
			    if(y){
				ok=false;
				break;
			}
			x=true;
		}else if(a[i]>=a[i+1]){
			y=true;
			
		}
	}
		
		if(ok){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
