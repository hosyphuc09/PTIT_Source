#include <stdio.h>
#include <math.h>

int nt(long long n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	long long n;
	 long long a[20]={0};
	scanf("%lld",&n);
	if(n==0) {
		a[0]=1;
	}
	while(n>0){
		int r=n%10;
		a[r]++;
		n/=10;
	}
	for(int i=0;i<10;i++){
		if(nt(i)){
		
		if(a[i]>0){
			printf("%d %d\n",i,a[i]);
		}
	}}
	return 0;
}