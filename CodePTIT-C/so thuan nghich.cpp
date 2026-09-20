#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	long long n;
	scanf("%lld",&n);
	long long k=n;
	long long f=0;
	while(n>0){
		int l=n%10;
		f=f*10+l;
		n/=10;
	}
	if(k==f){
		printf("YES\n");
	}else{
		printf("NO\n");
	}}
	return 0;
}