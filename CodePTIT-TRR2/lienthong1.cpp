#include <bits/stdc++.h>
using namespace std;
int n;
int a[105][105];bool vs[105];
vector<vector<int>> arr;
void dfs(int u){
	vs[u]=true;
	arr.back().push_back(u);
	for(int i=1;i<=n;i++){
		if(a[u][i]==1&&!vs[i]){
			dfs(i);
		}
	}
}
int demtplt(){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(vs[i]==false){
			vector<int> b;
			arr.push_back(b);
			cnt++;
			dfs(i);
		}
		
	}
	memset(vs,false,sizeof(vs));
	return cnt;
}
int main(){
	ifstream cin("TK.INP");
	ofstream cout("TK.OUT");
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	int solt=demtplt();
	cout<<solt<<endl;
	for(int i=0;i<arr.size();i++){
		sort(arr[i].begin(),arr[i].end());
		for(auto x:arr[i]){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
