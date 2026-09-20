#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(n>i){
		
		while(n%i==0){
			printf("%dx",i);
			n/=i;
		}
		}else if(n==i){
			printf("%d",i);
	}
}
printf("\n");
return 0;}