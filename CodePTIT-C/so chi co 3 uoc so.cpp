#include <stdio.h>
#include <math.h>

int check(long long n){
	if(n<2){
		return 0;
	}

	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
		return 0;
		}
	}
	return 1;}
	

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b;
		scanf("%lld %lld",&a,&b);
		int f=0;
		for(int i=a;(long long)i*i<=b;i++){
			long long square=i*i;
			if(square>a&&check(i)){
				f++;
			}
		}
		printf("%d\n",f);
}
return 0;}