#include <stdio.h>

int check(long long n){
	int r=n%10;
	n/=10;
	while(n!=0){
	
	if(r<n%10){
	 return 0;}
	 r=n%10;
	 n/=10;}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld",  &n);
		if(check(n)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		}
		return 0;
		}
	
	
	