#include <stdio.h>

int main(){
	int n, m,k;
	scanf("%d", &n);
	m=n%10;
	k=n;
	while(k>10){
		
		k/=10;
	}
	printf("%d %d", k, m);
	return 0;
}