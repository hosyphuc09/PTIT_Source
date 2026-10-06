#include <bits/stdc++.h>
using namespace std;
int n;
int a[105][105];
bool visited[105];
vector<vector<int>> arr;
void bfs(int u){
	queue<int> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		arr.back().push_back(x);
		for(int i=1;i<=n;i++){
			if(a[x][i]==1&&!visited[i]){
				visited[i]=true;
				q.push(i);
			}
		}
	}
}
int demtplt(){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(visited[i]==false){
			vector<int> b;
			arr.push_back(b);
			cnt++;
			bfs(i);
		}
	}
	memset(visited,false,sizeof(visited));
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
		for(int j=0;j<arr[i].size();j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
