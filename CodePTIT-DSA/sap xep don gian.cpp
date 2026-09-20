#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int> a(n+1);
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		a[x]=i;
	}
	int k=1,l=1;
	for(int i=2;i<=n;i++){
		if(a[i]>a[i-1]) k++;
		else k=1;
			l=max(l,k);
}
cout<<n-l<<endl;
return 0;
}
