#include <bits/stdc++.h>
using namespace std;
int check(int n){
	int x;
	pair<int,int> p={0,0};
	while(n>0){
		x=n%10;
		if(x%2!=0) p.first++;
		if(x%2==0) p.second++;
		n/=10;
	}
	return p.first>p.second;
}
bool cmp(int a,int b){
	int ca=check(a);
	int cb=check(b);
	if(ca!=cb) return ca>cb;
	return a<b;
}
int main(){
	int n;cin>>n;
	vector <int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end(),cmp);
	for(auto x:v){
		cout<<x<<" ";
	}
	cout<<endl;
	return 0;
	}
	

