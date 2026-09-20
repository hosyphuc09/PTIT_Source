#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=n/2;i<=n;i++){
		for(int j=n/2;j<=i; j++){
			if(j==n||j==i||i==n){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(int i=1;i<=n;i++){
		printf(" ");
		for(int j=1;j<=i; j++){
			if(j==i||j==1){
				printf("*");
			}}
			printf("\n");}
	return 0;
}