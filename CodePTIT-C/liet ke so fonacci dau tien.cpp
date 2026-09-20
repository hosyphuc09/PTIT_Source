#include <stdio.h>

int main(){
	int n, k=2;
	scanf("%d",&n);
	int a=0;
	int b=1;
	if(n<=0){
}
	else if(n==1){
		printf("0\n");
	}
	else if(n==2){
		printf("0 1\n");
	}else{
	
	printf("0 1 ");
	while(k<n){
		int t=a+b;
		a=b;
		b=t;
		k++;
		
			printf("%d ", t);
		
		}
		
	printf("\n");}
	return 0;
}