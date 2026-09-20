#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<long long> a(n),b,c;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if((i+1)%2==0) c.push_back(a[i]);
		else b.push_back(a[i]);
	}
	sort(b.begin(),b.end());
	sort(c.begin(),c.end(),greater<long long>());
	int i=0,j=0;
	for(int k=1;k<=n;k++){
		if(k%2==1){
			cout<<b[i++]<<" ";
		}else cout<<c[j++]<<" ";
	}
	cout<<endl;
	return 0;
}
