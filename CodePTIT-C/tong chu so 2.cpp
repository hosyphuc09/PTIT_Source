#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, tong;
		scanf("%d", &n);
		tong  = 0;
		while(n!=0){
			tong += n%10;
			n/=10;
		}
		printf("%d", tong);
	}
	return 0;
}