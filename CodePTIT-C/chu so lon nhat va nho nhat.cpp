#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, min, max;
		long long n;
		scanf("%lld", &n);
		if(n==0){
			printf("0 0\n");
		}
		min=9;
		max=0;
		
		while(n>0){
			a=n%10;
			if(a>max) max=a;
			if(a<min) min=a;
			n/=10;
		}
		printf("%d %d\n", max, min);
	}
	return 0;
}