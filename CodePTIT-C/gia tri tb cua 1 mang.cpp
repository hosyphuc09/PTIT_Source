#include <stdio.h>

int main(){
	int a[100],n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	printf("%.3f\n",(float)sum/n);
	return 0;}