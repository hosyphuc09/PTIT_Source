#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int d=0;
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]) d++;
	}
	cout<<d<<endl;
	return 0;
}
