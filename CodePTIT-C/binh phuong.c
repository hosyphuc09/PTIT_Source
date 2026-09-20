#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(n>=-999999999 && n<=999999999){
		long long square = (long long)n*n;
		printf("%lld\n", square);
	}else{
		printf("khong co gia tri!\n");
	}
}
	return 0;
}