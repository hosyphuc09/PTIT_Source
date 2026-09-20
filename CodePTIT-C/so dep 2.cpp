#include <stdio.h>
#include <math.h>

 int check(long long n){
 	int k=0,a[100];
 	while(n>0){
 		int r=n%10;
 		a[k++]=r;
 		n/=10;
	 }
	 for(int i=0;i<k/2;i++){
	 	
	 	if(a[i]!=a[k-i-1]){
	 		return 0;
		 }}
		 return 1;}
int checkk(long long n){
	int s=0;
	while(n>0){
		int l=n%10;
		n/=10;
		s=s+l;
	}
	if(s%10==0){
		return 1;
	}
	return 0;
}		 
int main(){
	int t;
	scanf("%d",&t);

	while(t--){
		int  n;
		scanf("%d",&n);
		long long p=pow(10,n-1);
			long long t=pow(10,n);
			int f=0;
		for(int i=p;i<=t;i++){
			if(check(i)&&checkk(i)){
				f++;
			}
		}
		printf("%d\n",f);
	}
	return 0;
}



		 