#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if( a>0 && b>0 && a<=999999 && b<=999999){
		long long product = (long long)a*b;
		printf("%d\n %d\n %lld\n %d\n %d\n %.2f\n", a+b, a-b, product, a/b, a%b, (double)a/b);
		
	}else{
		printf("khong co gia tri");
	}
	return 0;
}