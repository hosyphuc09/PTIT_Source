#include <bits/stdc++.h>
using namespace std;
int a[105][105]={0};
int vs[105]={0};
int n=0;
vector<vector<int>> arr;
void DFS(int u){
	vs[u]=1;
	arr.back().push_back(u);
	for(int i=1;i<=n;i++){
		if(a[u][i]==1&&vs[i]==0){
			DFS(i);
		}
	}
} 
int demTPLT(){
	int count=0;
	for(int i=1;i<=n;i++){
		if(vs[i]==0){
		
		vector<int> b;
		arr.push_back(b);
		count++;
		DFS(i);
	}
}
memset(vs,0,sizeof(vs));
return count;
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
	int sotplt=demTPLT();
	cout<<sotplt<<"\n";
	for(int i=0;i<arr.size();i++){
		sort(arr[i].begin(),arr[i].end());
		for(int j=0;j<arr[i].size();j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
