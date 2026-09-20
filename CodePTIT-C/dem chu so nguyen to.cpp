#include <stdio.h>
#include <math.h>
int check(long long n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	long long n, dem =0;
	scanf("%lld",&n);
	long long k=n;
	while(n!=0){
		int r=n%10;
		n/=10;
		int j=n;
		if(check(r)){
			printf("%d ", r);
			++dem;
			if(j>0){
				while(j>0){
					int h=j%10;
					j/=10;
					if(h==r){
						++dem;
					}
				}
			}
			printf("%d\n", dem);
			dem =0;
		}
	}
	return 0;
}