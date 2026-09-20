#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m, a[505][505];
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
			}
		}
		int max=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i][j]>=max){
					max=a[i][j];
				}
			}
		}
		cout<<max<<endl;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i][j]==max){
					cout<<" vi tri xuat hien: A["<<i<<"]"<<"["<<j<<"]"<<endl;
				}
			}
		}
	}
}
