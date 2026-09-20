#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Buoc 0: ";
	cout<<a[0]<<endl;
	int d=0;
	for(int i=1;i<n;i++){
		d++;
		int k=a[i];
		int j=i-1;
		while(j>=0&&a[j]>k){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=k;
		cout<<"Buoc "<<d<<": ";
		for(int l=0;l<=i;l++){
			cout<<a[l]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
