#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int d=0;
	for(int i=0;i<n;i++){
		bool f=false;
		d++;
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				f=true;
				swap(a[j],a[j+1]);
			}
		}
		if(!f) break;
		cout<<"Buoc "<<d<<":  ";
		for(int l=0;l<n;l++){
			cout<<a[l]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
