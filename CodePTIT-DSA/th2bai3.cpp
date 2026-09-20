#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int &x:a) cin>>x;
	deque<int> dq;
	for(int i=0;i<n;i++){
		while(!dq.empty()&& dq.front()<=i-k){
			dq.pop_front();
		}
		if(a[i]<0) dq.push_back(i);
		if(i>=k-1){
			if(dq.empty()){
				cout<<0<<" ";
			}
			else {
				cout<<a[dq.front()]<<" ";
			}
		}
	}
}
