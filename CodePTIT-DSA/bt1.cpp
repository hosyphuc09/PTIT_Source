#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> res;
int a[20];
void quaylui(int i){
	for(auto x:res){
		a[i]=x;
		if(i==n){
			for(int j=1;j<=n;j++){
				cout<<a[j];
			}
			cout<<endl;
		}else quaylui(i+1);
	}
}
int main(){
	cin>>n;
	set<int> s;
	for(int i=0;i<3;i++){
		int x;cin>>x;
		s.insert(x);
	}
	for(auto x:s) res.push_back(x);
	quaylui(1);
	return 0;
}
