#include <bits/stdc++.h>
using namespace std;
long long merge(long long a[],int l,int m,int r){
	int i,j,k,n1=m-l+1,n2=r-m;
	long long L[n1],R[n2];
	for(i=0;i<n1;i++) L[i]=a[l+i];
	for(i=0;i<n2;i++) R[i]=a[m+i+1];
	long long ans=0;
	i=0;j=0;k=l;
	while(i<n1&&j<n2){
		if(L[i]<=R[j]) a[k++]=L[i++];
		else{
			ans=ans+n1-i;
			a[k++]=R[j++];
		}
	}
	while(i<n1) a[k++]=L[i++];
	while(j<n2) a[k++]=R[j++];
	return ans;
}
long long mergesort(long long a[],int l,int r){
	long long ans=0;
	if(l<r){
		int m=l+(r-l)/2;
		ans=ans +mergesort(a,l,m);
		ans=ans+mergesort(a,m+1,r);
		ans =ans+merge(a,l,m,r);
	}
	return ans;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int l=0;
		int r=n-1;
		int m=l+(r-l)/2;
		
		cout<<mergesort(a,l,r)<<endl;
	}
	return 0;
}
