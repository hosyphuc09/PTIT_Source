#include <bits/stdc++.h>
using namespace std;
int main(){

int t;cin>>t;
while(t--){
	int m,n;cin>>m>>n;
	long long a[m],b[n];
	long long maxa=LLONG_MIN,minb=LLONG_MAX;
	for(int i=0;i<m;i++){
		cin>>a[i];
		maxa=max(maxa,a[i]);
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		minb=min(minb,b[i]);
	}
	sort(a,a+m);
	sort(b,b+n);
	long long tich=maxa*minb;
	cout<<tich<<endl;
}}
