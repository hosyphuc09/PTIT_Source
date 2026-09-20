#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		
	
		scanf("%lld", &n);
		
		printf("%lld = ",n);
		int q=1;
	for(int i=2;i<=n;i++){
		int k=0;
		while(n%i==0){
			k++;
			n=n/i;
		}if(k>0){
		if(!q) printf (" * ");
		
	if(k>0){
		printf("%d^%d",i,k);
	
	q=0;
	}}
	}
	printf("\n");
	}
	return 0;
}