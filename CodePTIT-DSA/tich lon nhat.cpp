#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	long long x=(a[0]*a[1]*a[2]);
	long long y=(a[0]*a[1]);
	if(x>y) cout<<x<<endl;
	else cout<<y<<endl;
	return 0;
}
