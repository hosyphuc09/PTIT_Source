#include <stdio.h>
long long ucln(long long a, long long b){
	while(b!=0){
		long long k=a%b;
		a=b ;
		b=k;
	}
	return a;
}
long long bcnn(long long a,long long b){
	return (a*b)/(ucln(a, b));
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a,b;
		scanf("%d %d", &a, &b);
		long long l=ucln(a,b);
		long long j=bcnn(a,b);
		
		if(bcnn(a,b)){
			printf("%lld ", j);
		}
		if(ucln(a,b)){
			printf("%lld\n",l);
		}
	}
	return 0;
}