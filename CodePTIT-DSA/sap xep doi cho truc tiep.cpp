#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[101];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int d=0;
	for(int i=0;i<n-1;i++){
		d++;
		int k=i;
		for(int j=i+1;j<n;j++){
			if(a[k]>a[j]){
				k=j;
			}}
		swap(a[i],a[k]);
		
		cout<<"Buoc "<<d<<": ";
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
