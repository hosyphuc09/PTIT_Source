#include <bits/stdc++.h>
using namespace std;
int n,m,k;
void solve(){
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> a(n+1);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	deque<int> ma,mi;
	bool check=false;
	for(int i=1;i<=n;i++){
		while(!ma.empty()&&a[ma.back()]<=a[i]) ma.pop_back();
		ma.push_back(i);
		while(!mi.empty()&&a[mi.back()]>=a[i]) mi.pop_back();
		mi.push_back(i);
		if(ma.front()<=i-m) ma.pop_front();
		if(mi.front()<=i-m) mi.pop_front();
		if(i>=m){
			if(a[ma.front()]-a[mi.front()]<=k){
				cout<<i-m+1<<"\n";
				check=true;
			}
		}
	}
	if(!check) cout<<"NONE"<<"\n";
}
int main(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
	solve();
	return 0;
}
