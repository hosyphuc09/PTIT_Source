#include <stdio.h>

int main(){
	int n,m,a[200],b[100],k;
	scanf("%d %d", &n,&m);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d", &b[i]);
	}
	scanf("%d", &k);
	for(int i=n-1;i>=k;i--){
		a[i+m]=a[i];
		
	}
	for(int i=0;i<m;i++){
	
	a[k+i]=b[i];
	
	}
	n+=m;
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}