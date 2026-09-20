#include <stdio.h>

long long check(int n){
	long long k=1;
	for(int i=1; i<=n; i++){
		k*=i;
	}
	return k;
}
int main(){
	long long a,b;
	scanf("%lld %lld", &a,&b);
	if(a>b){
		int t=a;
		a=b;
		b=t;
	}
	for(int j=a;j<=b;j++){
		long long f=j, sum =0;
		while(f>0){
			long long r=f%10;
			sum+=check(r);
			f/=10;
		}
	
	if(sum==j){
		printf("%lld ", j);
	}}
	printf("\n");
	return 0;}
	
	
	
	