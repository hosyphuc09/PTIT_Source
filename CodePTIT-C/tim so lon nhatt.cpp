#include <stdio.h>
#include <limits.h>
int main(){
	long long n;
	long long max=INT_MIN;
	while(scanf("%lld",&n)!=EOF){
		if(n>max){
			max=n;
		}
	}
	printf("%lld\n",max);
	return 0;
}