#include <stdio.h>

int main(){
	long long n,k;
	scanf("%lld %lld",&n,&k);
	int a[100],f=0;
	while(n>0){
		a[f++]=n%10;
		n/=10;
	}
	int s=0;
	for(int i=f-1;i>f-1-k;i--){
	s=s*10+a[i];	
	}
	printf("%d",s/k);
	return 0;
	}
	