#include <bits/stdc++.h>
using namespace std;
int ans=0,d=0;
int a[10][10];
int m=INT_MIN;
bool cheo1[505]={false},cheo2[505]={false},cot[505]={false};
void Try(int row){
	if(row>8){
		ans++;
		if(d>m) m=d;
		return;
	}
	for(int col=1;col<=8;col++){
		if(!cot[col]&&!cheo1[row-col+8]&&!cheo2[row+col]){
			d+=a[row][col];
			cot[col]=cheo1[row-col+8]=cheo2[row+col]=true;
			Try(row+1);
			d-=a[row][col];
			cot[col]=cheo1[row-col+8]=cheo2[row+col]=false;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++){
				cin>>a[i][j];
			}
		}
		 m=INT_MIN;
		ans=0;
		d=0;
		Try(1);
		cout<<m<<endl;
	}
	return 0;
}
