#include <stdio.h>

int main(){
	int a[100],n;
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<n-1;i++){
			for(int j=0;j<n-1-i;j++){
				if(a[j]>a[j+1]){
					int k=a[j];
					a[j]=a[j+1];
					a[j+1]=k;
				}
			}
		}
		for(int i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
		return 0;}