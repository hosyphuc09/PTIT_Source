#include <stdio.h>
#include <math.h>

int isPerpectSquare(int n){
	if(n<0) return 0;
	int sqrt_n = (int)sqrt(n);
	return(sqrt_n*sqrt_n == n);
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(n>0 && n<=999999999 && isPerpectSquare(n)){
				printf("YES\n");
			}else{
				printf("NO\n");
			
	}
}
	return 0;
}