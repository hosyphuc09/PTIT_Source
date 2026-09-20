#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[100],b[100];
		int d=0;
		for(int i=0;i<m;i++){
			cin>>a[i];
			b[d++]=a[i];
		}
		int i=m-1;
		while(i>=0&&b[i]==n-m+i+1) i--;
		if(i<0){
			cout<<m<<endl;
			continue;
		}
		b[i]++;
		for(int j=i+1;j<m;j++){
			b[j]=b[j-1]+1;
		}
		int dem=0;
		for(int r=0;r<m;r++){
			bool f=false;
			for(int j=0;j<m;j++){
				if(a[r]==b[j]){
					f=true;
					break;
				}
			}
			if(!f) dem++;
		}
		cout<<dem<<endl;
	}
	return 0;
}
