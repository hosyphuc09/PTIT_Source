#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[105];
int x[105];
vector<int> res;
int d=0;
void in(int k){
	cout<<"[";
	for(int i=0;i<k;i++){
		if(x[i]==1){
			cout<<a[i];
			if(i!=k-1) cout<<" ";
			else cout<<"] ";
		}
	}
	
}
void Try(int k,int sum){
	if(sum==m){
		in(k);
		d++;
		return;
	}
	if(sum>m||k>=n) return;
	else{
		x[k]=1;
		Try(k+1,sum+a[k]);
		x[k]=0;
		Try(k+1,sum);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		d=0;
		sort(a,a+n);
		Try(0,0);
		if(d==0) cout<<"-1"<<endl;;
		cout<<endl;
	}
}
