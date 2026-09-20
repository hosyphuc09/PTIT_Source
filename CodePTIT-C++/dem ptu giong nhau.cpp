#include <bits/stdc++.h>
using namespace std;
const int MAX=100005;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n][n];
		int b[MAX]={0};
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
        
	for(int i=0;i<n;i++){
		bool k[MAX]={false};
		for(int j=0;j<n;j++){
		if(!k[a[i][j]]){
			b[a[i][j]]++;
			k[a[i][j]]=true;
		}
	}
}
int l=0;
    for(int i=0;i<MAX;i++){
    	if(b[i]==n) l++;
	}
	cout<<l<<endl;
}
}
			
			
