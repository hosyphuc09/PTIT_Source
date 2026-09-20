#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%d", &t);
	int l=t;
	while(t--){
		int n;
		scanf("%d",&n);
		printf("Test %d: ",l-t);
		for(int i=2;i<=n;i++){
			int k=0;
			while(n%i==0){
				
					n=n/i;
					k++;
				}
				if(k>0){
				
				printf("%d(%d) ",i,k);}
			}
			printf("\n");
		}
	
	return 0;
}