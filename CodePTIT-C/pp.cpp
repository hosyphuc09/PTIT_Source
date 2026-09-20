#include <stdio.h>

int main(){
	int n,a[100],k=0;
	scanf("%d",&n);
	while(n>0){
		int r=n%2;
		n=n-r;
		n/=2;
		a[k++]=r;
	}
	for(int i=k-1;i>=0;i--){
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}