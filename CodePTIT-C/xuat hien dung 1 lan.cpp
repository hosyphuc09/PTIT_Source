#include <stdio.h>
int main(){


	int n,a[100];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int dem[100]={0};
	for(int i=0;i<n;i++){
	
			int k=0;
			for(int j=0;j<n;j++){
				if(a[j]==a[i]){
					
					k++;
			}}
			dem[i]=k;}
			int tong =0;
			for(int i=0;i<n;i++){
				if(dem[i]==1){
					tong++;
				}}
				printf("%d\n", tong);
			
			for(int i=0;i<n;i++){
				if(dem[i]==1){
					printf("%d ", a[i]);
				}
			}
					
				
			
			
	printf("\n");
	return 0;
}