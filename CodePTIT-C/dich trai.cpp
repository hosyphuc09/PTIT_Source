#include <stdio.h>

int main(){
	int n,a[100],m;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	scanf("%d",&m);
	for(int i=0;i<=m;i++){
		a[i+n]=a[i];
	}
	n+=m;
	for(int i=m;i<n;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}