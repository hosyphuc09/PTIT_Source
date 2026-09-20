#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int n,k;
struct matran{
	long long a[10][10];
};
matran nhanmatran(matran A,matran B){
	matran C;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			C.a[i][j]=0;
			for(int t=0;t<n;t++){
				C.a[i][j]=(C.a[i][j]+A.a[i][t]*B.a[t][j])%mod;
			}
		}
	}
	return C;
}
matran power(matran A,long long k){
	if(k==1) return A;
	matran half =power(A,k/2);
	matran res=nhanmatran(half,half);
	if(k%2==1) res=nhanmatran(res,A);
	return res;
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		matran A;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>A.a[i][j];
			}
		}
		matran res=power(A,k);
		long long sum=0;
		for(int i=0;i<n;i++){
			sum=(sum+res.a[i][n-1])%mod;
		}
		cout<<sum<<endl;
	}
	return 0;
}
