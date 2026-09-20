#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
	if(n<2) return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int n,k;
vector<int> a;
void Try(int u,int sum){
	if(a.size()==k){
		if(prime(sum)){
			for(int x:a) cout<<x<<" ";
			cout<<"\n";
		}
		return;
	}
	for(int i=u;i<=n;i++){
		a.push_back(i);
		Try(i+1,sum+i);
		a.pop_back();
	}
}
int main(){
	cin>>n>>k;
	Try(1,0);
	return 0;
}
