#include <stdio.h>

int main(){
	int a[100],n,max=0;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("%d ", max);
	int maxx=0;
	for(int i=0;i<n;i++){
		if(a[i]<max && a[i]>maxx){
			maxx=a[i];
		}
	}
	printf("%d\n",maxx);
	return 0;}
	