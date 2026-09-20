#include <stdio.h>

int check(long long n){
	long long a=0;
	long long b=1;
	while(b<n){
		long long k=b+a;
		a=b;
		b=k;
	}
	return b==n;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(check(n)){
			printf("YES\n");
			
		}else{
			printf("NO\n");
		}
	}
	return 0;
}