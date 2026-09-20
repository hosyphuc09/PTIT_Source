#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int n;
	cin>>n;
	vector<ll> a(3*n);
	for(int i=0;i<3*n;i++) cin>>a[i];
		
		vector<ll> left(3*n),right(3*n);
		priority_queue<ll,vector<ll>,greater<ll>> minheap;
		ll suml=0;
		for(int i=0;i<n;i++){
			suml+=a[i];
			minheap.push(a[i]);
		}
		left[n-1]=suml;
		for(int i=n;i<2*n;i++){
			suml+=a[i];
			minheap.push(a[i]);
			suml-=minheap.top();
			minheap.pop();
			left[i]=suml;
		}
		priority_queue<ll> maxheap;
		ll sumr=0;
		for(int i=3*n-1;i>=2*n;i--){
			sumr+=a[i];
			maxheap.push(a[i]);
		}
		right[2*n]=sumr;
		for(int i=2*n-1;i>=n;i--){
			sumr+=a[i];
			maxheap.push(a[i]);
			sumr-=maxheap.top();
			maxheap.pop();
			right[i]=sumr;
		}
		ll ans=LLONG_MIN;
		for(int i=n-1;i<2*n;i++){
			ans=max(ans,left[i]-right[i+1]);
		}
		cout<<ans;
		return 0;
	
}
