#include <stdio.h>

int main(){
	int a[100],n,min=100;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("%d ", min);
	int minn=100;
	for(int i=0;i<n;i++){
		if(a[i]>min && a[i]<minn){
			minn=a[i];
		}}
		printf("%d\n", minn);
	
	
	return 0;}
	