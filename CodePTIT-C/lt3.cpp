#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		int a=0;
		scanf("%d", &n);
		while(n>=10){
			a=n%10;
			n=n/10;
			n=a+n;
		}
		printf("%d\n", n);
	}
	return 0;
}