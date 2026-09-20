#include <bits/stdc++.h>
using namespace std;
int main(){

		int n;cin>>n;
		int a[n][3];
		for(int i=0;i<n;i++){
			for(int j=0;j<3;j++){
				cin>>a[i][j];
			}
		}
		int k=0;
		for(int i=0;i<n;i++){
			int c=0,d=0;
			for(int j=0;j<3;j++){
				if(a[i][j]==1) c++;
				if(a[i][j]==0) d++;
			}
			if(c>d) k++;
		}
		cout<<k<<endl;
	
}

