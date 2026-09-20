#include <stdio.h>
#include <limits.h>

int main(){
	long long max=0,min=10000000000,n;
	while(scanf("%lld", &n) !=EOF){
		if(n>max){
			max=n;
		}else  if(n<min){
			min =n;
		}
	}
	printf("%lld %lld\n", max, min);
	return 0;
}