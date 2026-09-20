#include <bits/stdc++.h>
using namespace std;
int a[100]={1,2,5,10,20,50,100,200,500,1000};
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int m=0;
		for(int i=9;i>=0;i--){
			while(n>=a[i]){
				m++;
				n-=a[i];
			}
			if(n==0)break;
		}
		cout<<m<<endl;
	}
	return 0;
}
