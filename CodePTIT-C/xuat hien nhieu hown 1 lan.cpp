#include <stdio.h>

int main(){
	int a[100],b[100],n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++){
		b[j]=a[i];
	}
	
	
	
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]=b[j]){
				printf("%d ",a[i]);
			}
		}
	}
	printf("\n");
	return 0;
}