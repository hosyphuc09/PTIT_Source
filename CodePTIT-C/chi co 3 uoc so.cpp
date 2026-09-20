#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b;
		long long l=0;
		scanf("%lld %lld",&a,&b);
		for(long long i=a;i<=b;i++){
			long long k=0;
			for(long long j=1;j*j<=i;j++){
				if(i%j==0){
					k++;
				}
			if(j!=i/j) k++;
		}
		if(k>3) break;
			if(k==3){
				l++;
			}
		}
		printf("%lld\n", l);
	}
	return 0;
}
