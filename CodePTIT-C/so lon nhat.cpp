#include <stdio.h>
#include <limits.h>

int main(){
	long long max=0, n;
	while(scanf("%lld", &n) !=EOF){
		if(n>max){
			max =n;
		}
	}
	printf("%lld\n", max);
	return 0;
}