#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		priority_queue<long long,vector<long long>,greater<long long>> qp;
		for(int i=0;i<n;i++){
			long long x;cin>>x;
			qp.push(x);
		}
		long long sum=0;
		while(qp.size()>1){
			long long a=qp.top();
			qp.pop();
			long long b=qp.top();
			qp.pop();
			long long z=a+b;
			sum+=z;
			qp.push(z);
		}
		cout<<sum<<endl;
	}
	return 0;
}
