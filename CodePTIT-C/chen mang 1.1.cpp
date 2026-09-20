#include <stdio.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[100],b[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<m;j++){
		scanf("%d",&b[j]);
	}
	int k;
	scanf("%d",&k);
	for(int i=k-1;i<n+k;i++){
		a[n+i-k+1]=a[i];
	}
	for(int i=k-1;i<k+m;i++){
		
		a[i]=b[i-k];
		
	}
	for(int i=0;i<n+k;i++){
		printf("%d ",a[i]);
	}
	return 0;
}