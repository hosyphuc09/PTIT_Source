#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int dem = 0;
	while(n>0){
		++dem;
		n/=10;
	}
	printf("%d\n", dem);
	return 0;
}