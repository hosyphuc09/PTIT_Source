#include <stdio.h>

int main(){
	int n,a[100],k=0;
	scanf("%d",&n);
	while(n>0){
		if(n%2==0){
			k++;
			n=n/2;
		}
		printf("2 %d",k);
		
}
return 0;}