#include <bits/stdc++.h>
using namespace std;
int n;
int a[10];
int sum=0;
int dem;
void Try(){
	for(int i=1;i<=3;i++){
		sum+=i;
		if(sum==n) dem++;
		else if(sum<n) Try();
		sum-=i;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		dem=0;
		Try();
		cout<<dem<<endl;
	}
	return 0;
}
