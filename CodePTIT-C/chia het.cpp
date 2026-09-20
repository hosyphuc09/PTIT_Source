#include <stdio.h>
#include <math.h>
int check(int n){
	long long a=1;
	for(int i=1;i<=n;i++){
		a*=i;
	}
	return a;
}
int main(){
	int n,k;
	scanf("%d %d", &n, &k);
	long long p=pow(2,k);
	
	long long f=check(n);
	if(f%p==0){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}