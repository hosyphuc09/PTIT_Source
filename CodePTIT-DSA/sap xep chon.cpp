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
		int x=i;
		d++;
		for(int j=i+1;j<n;j++){
			if(a[x]>a[j]) x=j;
		}
	swap(a[i],a[x]);
	cout<<"Buoc "<<d<<": ";
	for(int k=0;k<n;k++){
		cout<<a[k]<<" ";
	}
	cout<<endl;
}
return 0;
}
