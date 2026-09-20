#include <stdio.h>

long long ucln(long long a, long long b){
	while(b!=0){
		long long r=a%b;
		a=b;
		b=r;
	}
	return a;
}
long long bcnn(long long a,long long b){
	return (a*b)/(ucln(a,b));
}
int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	long long f=ucln(a, b);
	printf("%lld\n", f);
	long long k=bcnn(a, b);
	printf("%lld\n", k);
	return 0;
}