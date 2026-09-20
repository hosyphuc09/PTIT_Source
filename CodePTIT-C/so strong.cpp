#include <stdio.h>
#include <math.h>
#include <string.h>

long long gt(int n){
	long long k=1;
	for(int i=1; i<=n; i++){
		k*=i;
	}
	return k;
}
long long strong(int n){
	int tong=0, m=n;
	while(n!=0){
		for(int i=1; i<=n;i++){
			tong+=gt(n%10);
			n/=10;
			
		}
		if(tong == m)
		return 1;
	}
	return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%lld\n", strong(n) );

return 0;}