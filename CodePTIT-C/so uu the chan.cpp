#include <stdio.h>
#include <stdlib.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		int a,dem1=0,dem2=0;
		long long n;
		scanf("%lld", &n);
		if((n%10)%2==0){
		
		
		while(n>0){
			a=n%10;
			n/=10;
			if(a%2==0){
				++dem1;
			}else{
				++dem2;
			}
		}
		if(dem1>dem2){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		}else{
			printf("NO\n");
		}
	}
	return 0;
}