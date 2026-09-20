#include <bits/stdc++.h>
using namespace std;
int n,m;
bool visited[1000][1000]={false};
vector<string> v;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
void dfs(int x,int y){
	visited[x][y]=true;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=0&&nx<n&&ny>=0&&ny<m){
		if(v[nx][ny]=='#'&&!visited[nx][ny]){
			dfs(nx,ny);
		}
	}
}
}
int main(){
	cin>>n>>m;
	v.resize(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int dem=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(v[i][j]=='#'&&!visited[i][j]){
			dem++;
			dfs(i,j);
		}
	}
}
cout<<dem<<endl;
return 0;
}
