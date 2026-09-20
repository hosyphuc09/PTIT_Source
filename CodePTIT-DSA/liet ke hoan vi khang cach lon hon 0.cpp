#include <bits/stdc++.h>
using namespace std;
int n;
int a[100];
bool chuaxet[100];
void in(){
	int sum=0;
	for(int i=1;i<n;i++){
	
			sum+=(a[i]-a[i+1]);
		
	}
	if(sum>0){
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
void Try(int m){
	for(int i=1;i<=n;i++){
		if(!chuaxet[i]){
			chuaxet[i]=true;
			a[m]=i;
			if(m==n) in();
			else Try(m+1);
			chuaxet[i]=false;
		}
	}
}
int main(){
	cin>>n;
	memset(chuaxet,false,sizeof(chuaxet));
	Try(1);
	return 0;
}
