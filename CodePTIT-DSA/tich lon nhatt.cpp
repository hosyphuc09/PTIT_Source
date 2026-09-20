#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	long long x=max(a[n-1]*a[n-2],a[0]*a[1]);
	long long y=max(a[n-1]*a[n-2]*a[n-3],a[0]*a[1]*a[n-1]);
	long long z=max(x,y);
	cout<<z<<endl;
	return 0;
}
