#include <stdio.h>
#include <math.h>

int main(){
	int m, n;
	scanf("%d %d", &n, &m);
	int a=sqrt(n);
	int b= sqrt(m);
	if(a*a<n) ++a;
	printf("%d\n", b-a+1);
	for(int i=a; i<=b; i++){
		printf("%d\n", i*i);
	}
	return 0;
}