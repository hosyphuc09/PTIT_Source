#include <bits/stdc++.h>
using namespace std;
long long l,r;
vector<long long> res;
int nt(long long n){
	if(n<2) return 0;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
void Try(long long x){
	if(x>1e9) return ;
	res.push_back(x);
	for(int i=1;i<=9;i++){
		long long s=x*10+i;
		if(nt(s)) Try(s);
	}
}
int main(){
	vector<long long> a={2,3,5,7};
	for(auto x:a){
		Try(x);
	}
		sort(res.begin(),res.end());
		int t;cin>>t;
		while(t--){
			cin>>l>>r;
		int cnt=0;
		for(auto y:res){
			if(y>=l&&y<=r) cnt++;
		}
		cout<<cnt<<endl;	
		}
		return 0;
}
