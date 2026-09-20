#include <stdio.h>

int check(long long n){
	if(n==0||n==1) return 1;
	long long a=0;
	long long b=1;
	while(b<n){
		long long t=b;
		b=a+b;
		a=t;
	}
	return (b==n);
}
int main(){

int n,dem=0;
scanf("%d", &n);
for(int i=0;i<1000;i++){
	if(check(i)){
		printf("%d ", i);
		++dem;
		if(dem==n) break;
	}
}
return 0;}