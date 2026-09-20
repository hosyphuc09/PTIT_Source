#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int r=n%10;
	n/=10;
	printf("%d",n-r);
	return 0;
}