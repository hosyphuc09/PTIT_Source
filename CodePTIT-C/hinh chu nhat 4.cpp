#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int i,j,k;
	if(a<=b)
	for( i=b;i>b-a;i--){
		for( j=i;j>=1;j--){
			printf("%d",j);
		}
		for( k=j+2;k<=b-i+1;k++){
			printf("%d",k);
		}
		printf("\n");
	}else{
		for( i=a;i>=1;i--)
		{
			if(i>=b){
				for(j=i;j>i-b;j--){
					printf("%d",j);
				}
			}else{
				for(j=i;j>=1;j--){
					printf("%d",j);
				}for(k=j+2;k<=b-i+1;k++){
					printf("%d",k);
				}
			}
			printf("\n");
		}
	}
	return 0;
}