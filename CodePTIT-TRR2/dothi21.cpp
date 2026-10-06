#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream cin("DT.INP");
	ofstream cout("DT.OUT");
	int t,n;
	cin>>t>>n;
	vector<int> degin(n+1);
	vector<int> degout(n+1);
	vector<vector<int>> v;
	int a[105][105];
	int d=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			
			if(a[i][j]>0&&a[i][j]<=50){
				d++;
				degout[i]++;
				degin[j]++;
				v.push_back({i,j,a[i][j]});
			}
		}
	}
	if(t==1){
		for(int i=1;i<=n;i++){
			cout<<degin[i]<<" "<<degout[i]<<endl;
		}
	}
	else if(t==2){
		cout<<n<<" "<<d<<endl;
		for(int i=0;i<d;i++){
			for(auto x:v[i]){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
}
