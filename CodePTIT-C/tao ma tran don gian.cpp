#include <stdio.h>

int main(){
	int n,a[100][100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0){
				printf("%d ",j);
			}else{
				int t=j-i;
				if(t<0){
					t=0;
					printf("%d ",t);
				}else{
				
				printf("%d ",t);
			}
		}}
		printf("\n");
	}
	return 0;
}