#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		queue<int> q;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			if(x==1){
				cout<<q.size()<<"\n";
			}else if(x==2){
				if(q.empty()) cout<<"YES\n";
				else cout<<"NO\n";
			}else if(x==3){
				int y;cin>>y;
				q.push(y);
			}else if(x==4){
				if(!q.empty()){
					q.pop();
				}
			}else if(x==5){
				if(q.empty()) cout<<"-1\n";
				else cout<<q.front()<<"\n";
			}else if(x==6){
				if(q.empty()) cout<<"-1\n";
				else cout<<q.back()<<"\n";
			}
		}
	}
	return 0;
}
