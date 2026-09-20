#include <stdio.h>

int main(){
	int a[100],n;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n;i++){
			if(a[i]%2==0){
				printf("%d ", a[i]);
			}
			
		}
		printf("\n");
		for(int i=0;i<n;i++){
			if(a[i]%2!=0){
				printf("%d ",a[i]);
			}
			
		}return 0;}