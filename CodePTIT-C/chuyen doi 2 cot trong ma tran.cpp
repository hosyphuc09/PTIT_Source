#include <stdio.h>

int main(){
	int a,b,c[100][100];
	scanf("%d %d",&a,&b);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			scanf("%d",&c[i][j]);
		}
	}
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=a;i++){
	
		
			
			int t=c[i][n];
			c[i][n]=c[i][m];
			c[i][m]=t;
		
	}
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}