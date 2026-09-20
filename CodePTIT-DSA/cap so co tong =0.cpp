#include <bits/stdc++.h>
using namespace std;
int n;
long long k;
long long a[100001];
int d=0;
void Try(int i){
	for(int j=i;j<n;j++){
		if(a[i]+a[j]==k) d++;
		if(a[i]+a[j]>k) Try(i+1);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		d=0;
		Try(0);
		cout<<d<<endl;
	}
	return 0;
}
