#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a>b){
		int r=a;
		a=b;
		b=r;
	}
	long long tong=0;
	for(int i=a; i<=b; i++){
	
		tong +=i;
	}
	printf("%lld", tong);
	return 0;}