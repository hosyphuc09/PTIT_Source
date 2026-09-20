#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a,b;
		long long k[93];
		scanf("%d %d", &a,&b);
		k[1]=1;
		k[2]=1;
		for(int i=3;i<=b;i++){
			k[i]=k[i-1]+k[i-2];
			
		}
		for(int i=a;i<=b;i++){
			printf("%lld ", k[i]);
		}
		printf("\n");}
		return 0;}
		
		
		