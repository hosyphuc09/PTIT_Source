#include <stdio.h>

int check(long long n){
	long long r=1;
	while(n>0){
		if(n%2==0){
		r=r*2;
		n/=2;	
		}else
		return 0;
	
	}
	return r;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		for(int i=n-1;i>1;i--){
			if(check(i)){
				printf("%lld\n",i);
				break;
			}
		}
		}
	
	return 0;
}