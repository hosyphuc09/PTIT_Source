#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a[200],b[100],p,n,m;
		scanf("%d %d %d", &n,&m, &p);
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		for(int i=0;i<m;i++){
			scanf("%d", &b[i]);
		}
		for(int i=n-1;i>=p;i--){
			a[i+m]=a[i];
		}
		for(int i=0;i<m;i++){
			a[p+i]=b[i];
		}
		n+=m;
		

	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");}
	return 0;
}