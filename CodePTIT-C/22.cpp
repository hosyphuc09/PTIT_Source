#include <stdio.h>

int main(){
	long long n,k;
	scanf("%lld %lld",&n,&k);
	long long c=(n+1)/2;
	if(k<=c){
		printf("%lld",2*k-1);
		
	}else {
		printf("%lld",2*(k-c));
	}
	return 0;
}