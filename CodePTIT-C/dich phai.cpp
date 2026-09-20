#include <stdio.h>

int main(){
	int n,a[100],m;
	
	scanf("%d", &n);
	int k=n;
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	scanf("%d",&m);
	for(int i=n-1-m;i>=0;i--){
		a[n+i]=a[i];
	}
	n=n+(n-m);
	for(int i=k-m;i<n;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;}