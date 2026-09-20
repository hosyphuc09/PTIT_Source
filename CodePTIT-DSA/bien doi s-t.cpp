#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		queue<pair<int,int>> q;
		set<int> check;
		q.push({n,0});
		check.insert(n);
		while(!q.empty()){
		pair<int,int> p=q.front();
		int top=p.first;
		int step=p.second;
			q.pop();
			if(top==k){
				cout<<step<<endl;
				break;
			}
			if(top-1>0&&!check.count(top-1)){
				q.push({top-1,step+1});
				check.insert(top-1);
			}
			if(top*2<=10000&&!check.count(top*2)){
				q.push({top*2,step+1});
				check.insert(top*2);
			}
		}
		
	}
	return 0;
}
