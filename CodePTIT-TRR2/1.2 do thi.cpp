#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream cin("DT.INP");
	ofstream cout("DT.OUT");
	int t,n;cin>>t>>n;
	int a[105][105];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	if(t==1){
		for(int i=1;i<=n;i++){
			int deg=0;
			for(int j=1;j<=n;j++){
				deg+=a[i][j];
			}
			cout<<deg<<" ";
		}
		cout<<"\n";
	}else if(t==2){
		cout<<n<<"\n";
		for(int i=1;i<=n;i++){
			vector<int> b;
			int cnt=0;
			
			for(int j=1;j<=n;j++){
				if(a[i][j]==1){
					b.push_back(j);
					cnt++;
				}
			}
			cout<<cnt<<" ";
			for(auto x:b) cout<<x<<" ";
			cout<<"\n";
		}
	}
}
