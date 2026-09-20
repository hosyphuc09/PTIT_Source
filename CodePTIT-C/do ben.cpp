#include <stdio.h>

int check(long long n){
	int k=1;
	while(n>0){
		int r=n%10;
		n/=10;
		k*=r;
	}
	return k;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		int  f;
		scanf("%lld", &n);
		if(n>=1 && n<10){
			f =0;
		} else if(n>10){
			while(n>10){
				n=check(n);
				++f;
			}
			
		}
		printf("%d\n", f);
	}
	return 0;
}