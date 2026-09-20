#include <bits/stdc++.h>
using namespace std;
int check(int a[], int k,int n){
	bool f=false;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(abs(a[i]-a[j])==k){
				return 1; 
				f=true;
				break;
			}
		}
	}
	return 0;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(check(a,k,n)){
			cout<<"1"<<endl;
		}else{
			cout<<"-1"<<endl;
		}
	}
} 