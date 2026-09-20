#include <stdio.h>

int main(){
	int m,n,a[100][100]; 
	scanf("%d %d", &m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d", a[i][j]);}
			printf("\n");}
	return 0;
}