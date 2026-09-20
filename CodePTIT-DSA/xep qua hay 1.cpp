#include <bits/stdc++.h>
using namespace std;
int n,ans=0;
int m=INT_MIN;
bool cheo1[20]={false},cheo2[20]={false},cot[20]={false};
void Try(int row){
	if(row>n){
		ans++;
		return;
	}
	for(int col=1;col<=n;col++){
		if(!cot[col]&&!cheo1[row-col+n]&&!cheo2[row+col]){
			cot[col]=cheo1[row-col+n]=cheo2[row+col]=true;
			Try(row+1);
			cot[col]=cheo1[row-col+n]=cheo2[row+col]=false;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		ans=0;
		Try(1);
		cout<<ans<<endl;
	}
	return 0;
}
