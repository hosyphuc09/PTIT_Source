#include <stdio.h>

int check(long long n){
	if(n%2==0) return 0;
	int a,chan=0, le=0;
	while(n>0){
		a=n%10;
		n/=10;
		if(a%2==0){
			++chan;
		}else
		++le;
		
	}
	if(le>chan) return 1;
	else return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	
	long long n;
	scanf("%lld", &n);
	
	if(check(n))
		printf("YES\n");
	else
		printf("NO\n");
	}
	return 0;
}