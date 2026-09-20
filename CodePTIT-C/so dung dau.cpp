#include <stdio.h>
int check(int n,int a[]){
	int l[1000],k=0;
	int max=-1;
	for(int i=n-1;i>=0;i--){
		if(a[i]>max){
		
		l[k++]=a[i];
		max=a[i];
	}}
	for(int i=k-1;i>=0;i--){
		printf("%d ",l[i]);
	}
	printf("\n");
	return 0;}
	


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n,a[1000];
		scanf("%d", &n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		check(n, a);
	}
	return 0;}
		
		
		
		
		