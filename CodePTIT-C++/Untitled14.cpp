#include <bits/stdc++.h>

using namespace std;
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c[100][100];
		cin>>a>>b;
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				cin>>c[i][j];
			}
		}
		
		bool d[100][100]={false};
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(nt(c[i][j]) && !d[i][j]){
				
						cout<<c[i][j]<<" ";
					
					d[i][j]=true;
				
		} }
	}
}}

