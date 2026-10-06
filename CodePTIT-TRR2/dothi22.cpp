#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream cin("DT.INP");
	ofstream cout("DT.OUT");
	int t,n,m;
	cin>>t>>n>>m;
	vector<int> degin(n+1);
	vector<int> degout(n+1);
	int a[n+1][n+1];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j){
				a[i][j]=0;
			}else{
				a[i][j]=10000;
			}
		}
	}
	for(int i=0;i<m;i++){
		int x,y,z;
		cin>>x>>y>>z;
		degin[y]++;
		degout[x]++;
		a[x][y]=z;
	}
	if(t==1){
		for(int i=1;i<=n;i++){
			cout<<degin[i]<<" "<<degout[i]<<endl;
		}
	}
	else if(t==2){
		cout<<n<<endl;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
