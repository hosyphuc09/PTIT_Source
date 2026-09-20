#include <stdio.h>

long long factorial(int n){
	long long k=1;
	for(int i=1; i<=n; i++){
		k*=i;
	}
	return k;
}
int main(){
	int n;
	scanf("%d", &n);
	if(n<1 || n>20){
		printf("moi nhap lai!\n");
	}
	long long s=0;
	for(int i=1; i<=n; i++){
		 s+=factorial(i);
	}
	printf("%lld", s);
	return 0;
}