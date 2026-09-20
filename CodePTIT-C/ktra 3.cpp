#include <stdio.h>

int main(){
	long long n;
	scanf("%lld",&n);
	long long f=0;
	while(n>1){
		f++;
		n=(n+1)/2;
	}
	printf("%lld\n",f);
	return 0;
}