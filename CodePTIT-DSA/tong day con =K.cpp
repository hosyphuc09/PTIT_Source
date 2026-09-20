#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
int x[100];
int d=0;
void in(int t){
	for(int i=1;i<=t;i++){
		if(x[i]==1){
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
}
void Try(int i,int sum){
	if(sum==k){
		in(i-1);
		d++;
		return;
	}
	if(sum>k||i>n) return ;
	
	x[i]=0;
	Try(i+1,sum);
	x[i]=1;
	Try(i+1,sum+a[i]);
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
	cin>>a[i];
}
    Try(1,0);
    cout<<d<<endl;
    return 0;
}
