#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		int k=0;
		if(n%i==0){
		
		while(n%i==0){
			k++;
			n/=i;
		}
		printf("%d^%d",i,k);
		if(n>=i){
			printf("*");
		}
	}}
	return 0;
}