#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]==1){
					for(int k=0;k<m;k++){
						if(a[i][k]==0) a[i][k]=-1;
					}
					for(int k=0;k<n;k++){
						if(a[k][j]==0) a[k][j]=-1;
					}
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]==0){
					cout<<"0"<<" ";
				}else{
					cout<<"1"<<" ";
				}
				cout<<endl;
			}
		}
	}
}
