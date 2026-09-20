#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int d=0;
	for(int i=0;i<n-1;i++){
		int m=i;
		d++;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[m]) swap(a[m],a[j]);
		}
		cout<<"Buoc "<<d<<": ";
		for(int l=0;l<n;l++){
			cout<<a[l]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
