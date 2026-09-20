#include <stdio.h>
#include <math.h>

int main(){
	long long n;
	scanf("%lld",&n);
	long long m=sqrt(n);
	if(n%1==0&&n%m==0)
	{
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	return 0;
}