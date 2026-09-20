#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<long long> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
vector<long long> b(n,-1);
	for(int i=0;i<n;i++){
		if(a[i]>=0&&a[i]<n)
		{
		b[a[i]]=a[i];	
		}
	}
for(int i=0;i<n;i++){
	cout<<b[i]<<" ";
}
cout<<endl;
	}
}
