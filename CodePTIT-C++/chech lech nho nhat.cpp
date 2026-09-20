#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		
		sort(a,a+n);
	     int m=INT_MAX;
	     
		for(int i=0;i<n-1;i++){
			if(m>(a[i+1]-a[i])){
				m=a[i+1]-a[i];
			}
		}
		cout<<m<<endl;
	}
	return 0;
	}
