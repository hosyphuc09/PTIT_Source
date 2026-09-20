#include <stdio.h>

#define MOD 1000000007

int main(){
	int n;
	scanf("%d",&n);
	 if(n==0)
	 {
	 	printf("0\n");
	 	return 0;
	 }
	 long long a=0, b=1,t;
	 for(int i=2;i<=n;i++){
	 	t=(a+b)%MOD;
	 	a=b;
	 	b=t;
	 }
	 printf("%lld\n", b);
	 return 0;
}