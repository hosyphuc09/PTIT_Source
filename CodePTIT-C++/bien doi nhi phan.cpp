#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		int n,m,a[100][100],row[100]={0},col[100]={0};
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				if(a[i][j]==1){
					row[i]=1;
					col[j]=1;
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
			
				if(row[i]==1||col[j]==1){
					a[i][j]=1;
				}
		}
		}
		
		for(int i=0;i<n;i++){
			int k=0;
			for(int j=0;j<m;j++){
				cout<<a[i][j]<<" ";
				k++;
				if(k==m){
					cout<<endl;
				}
	}
}
cout<<endl;
}
}
